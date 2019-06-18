/*
 * Qt4 bitcoin GUI.
 *
 * W.J. van der Laan 2011-2012
 * The Bitcoin Developers 2011-2012
 */

#include <QApplication>

#include "bitcoingui.h"

#include "transactiontablemodel.h"
#include "addressbookpage.h"
#include "sendcoinsdialog.h"
#include "signverifymessagedialog.h"
#include "optionsdialog.h"
#include "aboutdialog.h"
#include "clientmodel.h"
#include "walletmodel.h"
#include "editaddressdialog.h"
#include "optionsmodel.h"
#include "transactiondescdialog.h"
#include "addresstablemodel.h"
#include "transactionview.h"
#include "overviewpage.h"
#include "bitcoinunits.h"
#include "guiconstants.h"
#include "askpassphrasedialog.h"
#include "notificator.h"
#include "guiutil.h"
#include "rpcconsole.h"
#include "wallet.h"
#include "init.h"
#include "ui_interface.h"
#include "forms/settings.h"

#ifdef Q_OS_MAC
#include "macdockiconhandler.h"
#endif

#include <QMenuBar>
#include <QMenu>
#include <QIcon>
#include <QVBoxLayout>
#include <QToolBar>
#include "titlebar.h"
#include <QStatusBar>
#include <QLabel>
#include <QMessageBox>
#include <QToolButton>
#include <QMimeData>
#include <QProgressBar>
#include <QStackedWidget>
#include <QDateTime>
#include <QMovie>
#include <QFileDialog>
#include <QDesktopServices>
#include <QTimer>
#include <QDragEnterEvent>
#include <QUrl>
#include <QMimeData>
#include <QDesktopWidget>
#include <QStyle>
#include <QProxyStyle>
#include <iostream>
#include <QFontDatabase>

#include "graphthread.h"
extern CWallet* pwalletMain;
extern int64_t nLastCoinStakeSearchInterval;
double GetPoSKernelPS();
class KdeWorkaroundProxyStyle : public QProxyStyle {
public:
    void polish(QWidget* w) {
        if(qobject_cast<QToolButton*>(w))
            w->setProperty("_kde_toolButton_alignment", Qt::AlignLeft);
    }
};
BitcoinGUI::BitcoinGUI(QWidget *parent):
    QMainWindow(parent),
    clientModel(0),
    walletModel(0),
    toolbar(0),
    encryptWalletAction(0),
    changePassphraseAction(0),
    unlockWalletAction(0),
    lockWalletAction(0),
    aboutQtAction(0),
    trayIcon(0),
    notificator(0),
    rpcConsole(0),
    prevBlocks(0),
    nWeight(0)
{
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-Regular.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-Bold.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-Italic.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-Light.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-BoldItalic.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-Medium.ttf");
    QFontDatabase::addApplicationFont(":/fonts/res/fonts/Ubuntu-MediumItalic.ttf");

    centerAndResize();
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMaximizeButtonHint | Qt::WindowMinimizeButtonHint);
    setStyleSheet("QMainWindow {background:'#0b1d2c'}");
    setWindowTitle(tr("Shard") + " - " + tr("Wallet"));

#ifndef Q_OS_MAC
    qApp->setWindowIcon(QIcon(":icons/bitcoin"));
    qApp->setStyle(new KdeWorkaroundProxyStyle());
    setWindowIcon(QIcon(":icons/bitcoin"));

#else
    //setUnifiedTitleAndToolBarOnMac(true);
    QApplication::setAttribute(Qt::AA_DontShowIconsInMenus);
    QApplication::setStyle(new KdeWorkaroundProxyStyle);
#endif
    // Accept D&D of URIs
    setAcceptDrops(true);
  //  setWindowFlags(Qt::WindowSystemMenuHint);

    // Create actions for the toolbar, menu bar and tray/dock icon
    createActions();

    // Create application menu bar
    //createMenuBar();

    // Create the toolbars
    createToolBars();

    // Create the tray icon (or setup the dock icon)
    createTrayIcon();

    // Create tabs
    overviewPage = new OverviewPage();
    settingsPage = new Settings(this);


    transactionView = new TransactionView();


    addressBookPage = new AddressBookPage(AddressBookPage::ForEditing, AddressBookPage::SendingTab);

    receiveCoinsPage = new AddressBookPage(AddressBookPage::ForEditing, AddressBookPage::ReceivingTab);

    sendCoinsPage = new SendCoinsDialog(this);

    signVerifyMessageDialog = new SignVerifyMessageDialog(this);

    centralStackedWidget = new QStackedWidget(this);

    centralStackedWidget->addWidget(overviewPage);
    centralStackedWidget->addWidget(transactionView);
    centralStackedWidget->addWidget(addressBookPage);
    centralStackedWidget->addWidget(receiveCoinsPage);
    centralStackedWidget->addWidget(sendCoinsPage);
    centralStackedWidget->addWidget(settingsPage);

    QWidget *centralWidget = new QWidget();
    centralLayout = new QVBoxLayout(centralWidget);

    topWidget = new Titlebar(this);


     centralLayout->setSpacing(0);
    centralLayout->addWidget(topWidget);
    centralLayout->addWidget(centralStackedWidget);
    connect(settingsPage,SIGNAL(minimizeApp()),this,SLOT(minimize()));
    connect(settingsPage,SIGNAL(maximizeApp()),this,SLOT(maximize()));
    connect(settingsPage,SIGNAL(closeApp()),this,SLOT(close()));
    connect(topWidget,SIGNAL(closeApp()),this,SLOT(close()));
    connect(topWidget,SIGNAL(maximizeApp()),this,SLOT(maximize()));
    connect(topWidget,SIGNAL(minimizeApp()),this,SLOT(minimize()));
      QRect window = qApp->desktop()->availableGeometry();
          setMaximumSize(QSize(window.width(),window.height()));

    setCentralWidget(centralWidget);

    // Create status bar
    statusBar();

    // Status bar notification icons
    QWidget *frameBlocks = new QWidget();
    frameBlocks->setContentsMargins(0,0,0,0);
    frameBlocks->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    frameBlocks->setStyleSheet("QWidget { background: #15202d; padding-bottom: 5px;padding-top: 15px; }");
    QHBoxLayout *frameBlocksLayout = new QHBoxLayout(frameBlocks);
    frameBlocksLayout->setContentsMargins(0,0,0,0);
    frameBlocksLayout->setSpacing(0);
    frameBlocksLayout->setAlignment(Qt::AlignLeft);
    labelEncryptionIcon = new QLabel();
    labelStakingIcon = new QLabel();
    labelConnectionsIcon = new QLabel();

    labelEncryptionText = new QLabel();
    labelEncryptionText->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Maximum);
    labelEncryptionText->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    labelEncryptionIcon->setStyleSheet("QLabel{color:white;margin-left:10px;background-color: #15202d;border:0px;width:30px} QToolTip {color:white;margin-left:0px;background-color: #15202d;border:0px;padding:5px}");
    labelStakingIcon->setStyleSheet("QLabel{color:white;margin-left:0px;background-color: #15202d;border:0px} QToolTip {color:white;margin-left:0px;background-color: #15202d;border:0px;padding:5px}");
    labelConnectionsIcon->setStyleSheet("QLabel{color:white;margin-left:0px;background-color: #15202d;border:0px} QToolTip {color:white;margin-left:0px;background-color: #15202d;border:0px;padding:5px}");

    labelEncryptionText->setStyleSheet("color:#dddddd;font-size:12px;margin-left:2px;background-color:transparent");
    labelEncryptionIcon->setFixedWidth(25);

    frameBlocksLayout->addWidget(labelEncryptionIcon);
         centralLayout->setMargin(0);

    frameBlocksLayout->addWidget(labelEncryptionText);
    frameBlocksLayout->addStretch();
    frameBlocksLayout->addWidget(labelStakingIcon);
    frameBlocksLayout->addStretch();
    frameBlocksLayout->addWidget(labelConnectionsIcon);
    frameBlocksLayout->addStretch();


    toolbar->addWidget(frameBlocks);

    if (GetBoolArg("-staking", true))
    {
        QTimer *timerStakingIcon = new QTimer(labelStakingIcon);
        connect(timerStakingIcon, SIGNAL(timeout()), this, SLOT(updateStakingIcon()));
        timerStakingIcon->start(30 * 1000);
        updateStakingIcon();
    }

    // Progress bar and label for blocks download
    progressBarLabel = new QLabel();
    progressBarLabel->setVisible(false);
    progressBarLabel->setStyleSheet("color:white;padding:5px;background: #1d2e3f;");
    progressBar = new QProgressBar();
    progressBar->setAlignment(Qt::AlignCenter);
    progressBar->setVisible(false);
    progressBar->setStyleSheet("QProgressBar{background: #1d2e3f;color:white;border:0px;width:100% }QProgressBar:horizontal {border: 1px solid #1d2e3f;border-radius: 3px;background: #102537;padding: 1px;text-align: center;margin-right: 4ex;}QProgressBar::chunk:horizontal {background: #003750;width: 10px;}");
    statusBar()->setStyleSheet("QStatusBar{background: #1d2e3f;color:white;border:0px;width:100%} QStatusBar::item{border:0px;color:white;}");
    statusBar()->addWidget(progressBarLabel);
    statusBar()->addWidget(progressBar);
    statusBar()->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Preferred);
    QFont ft = progressBarLabel->font();
    QFontMetrics mt(ft);
#if defined(Q_OS_WIN)
    //linux code goes here
     progressBar->setFixedWidth(width()-mt.width(progressBarLabel->text())-35);
#else
    // windows code goes here
     progressBar->setFixedWidth(width()-mt.width(progressBarLabel->text()));
#endif



    syncIconMovie = new QMovie();
    syncIconMovie->setFileName(":/images/res/images/sync.gif");
    syncIconMovie->start();
    thread = new GraphThread(this);
    thread->start();
    connect(thread,SIGNAL(priceChanged(QString)),overviewPage, SLOT(priceChanged(QString)));
    connect(thread,SIGNAL(priceChanged(QString)),transactionView, SLOT(priceChanged(QString)));
    connect(thread,SIGNAL(graphChanged(QString)),overviewPage, SLOT(graphChanged(QString)));
    // Clicking on a transaction on the overview page simply sends you to transaction history page
    //connect(overviewPage, SIGNAL(transactionClicked(QModelIndex)), this, SLOT(gotoHistoryPage()));
    //connect(overviewPage, SIGNAL(transactionClicked(QModelIndex)), transactionView, SLOT(focusTransaction(QModelIndex)));
    connect(overviewPage, SIGNAL(moreClicked()), this, SLOT(gotoHistoryPage()));
    connect(overviewPage, SIGNAL(sendTransaction()), this, SLOT(gotoSendCoinsPage()));
    connect(overviewPage, SIGNAL(recieveTransaction()), this, SLOT(gotoReceiveCoinsPage()));
    connect(overviewPage, SIGNAL(changeIndex(int)), this, SLOT(indexChangeThread(int)));
    connect(overviewPage, SIGNAL(transactionClicked(QModelIndex)), this, SLOT(gotoHistoryPage()));
    // Double-clicking on a transaction on the transaction history page shows details
    connect(transactionView, SIGNAL(doubleClicked(QModelIndex)), transactionView, SLOT(showDetails()));
    connect(settingsPage,SIGNAL(backupWallet()),this,SLOT(backupWallet()));

    rpcConsole = new RPCConsole(this);
    connect(openRPCConsoleAction, SIGNAL(triggered()), rpcConsole, SLOT(show()));
    // prevents an oben debug window from becoming stuck/unusable on client shutdown
    connect(quitAction, SIGNAL(triggered()), rpcConsole, SLOT(hide()));

    // Clicking on "Verify Message" in the address book sends you to the verify message tab
    connect(addressBookPage, SIGNAL(verifyMessage(QString)), this, SLOT(gotoVerifyMessageTab(QString)));
    // Clicking on "Sign Message" in the receive coins page sends you to the sign message tab
    connect(receiveCoinsPage, SIGNAL(signMessage(QString)), this, SLOT(gotoSignMessageTab(QString)));





    gotoOverviewPage();
}

BitcoinGUI::~BitcoinGUI()
{
    if(trayIcon) // Hide tray icon, as deleting will let it linger until quit (on Ubuntu)
        trayIcon->hide();

}
void BitcoinGUI::centerAndResize() {
    // get the dimension available on this screen


    QSize newSize = QSize(850+220, 640);

    setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            newSize,
            qApp->desktop()->availableGeometry()
        )
    );
    setFixedSize(newSize);

}


void BitcoinGUI::close(){
    QMainWindow::close();
}
void BitcoinGUI::minimize(){showMinimized();}
void BitcoinGUI::maximize(){
    Qt::WindowStates state = windowState();
    if(state == Qt::WindowMaximized)
    {

        showNormal();
    }
    else
    {

        showMaximized();
    }
}



void BitcoinGUI::indexChangeThread(int index){
    thread->setSelected(index);
}

void BitcoinGUI::createActions()
{
    QActionGroup *tabGroup = new QActionGroup(this);

    overviewAction = new QAction(tr("&Dashboard"), this);
    overviewAction->setToolTip(tr("Show general overview of wallet"));
    overviewAction->setCheckable(true);
    overviewAction->setIcon(QIcon(":/images/res/images/pixel.png"));
    overviewAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_1));
    tabGroup->addAction(overviewAction);

    receiveCoinsAction = new QAction(tr("&Receive"), this);
    receiveCoinsAction->setToolTip(tr("Show the list of addresses for receiving payments"));
    receiveCoinsAction->setCheckable(true);
    receiveCoinsAction->setIcon(QIcon(":/images/res/images/pixel.png"));

    receiveCoinsAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_2));
    tabGroup->addAction(receiveCoinsAction);

    sendCoinsAction = new QAction(tr("&Send"), this);
    sendCoinsAction->setToolTip(tr("Send coins to a Shard address"));
    sendCoinsAction->setCheckable(true);
    sendCoinsAction->setIcon(QIcon(":/images/res/images/pixel.png"));
    sendCoinsAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_3));
    tabGroup->addAction(sendCoinsAction);

    historyAction = new QAction(tr("&Transactions"), this);
    historyAction->setToolTip(tr("Browse transaction history"));
    historyAction->setIcon(QIcon(":/images/res/images/pixel.png"));
    historyAction->setCheckable(true);
    historyAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_4));
    tabGroup->addAction(historyAction);

    addressBookAction = new QAction(tr("&Address Book"), this);
    addressBookAction->setToolTip(tr("Edit the list of stored addresses and labels"));
    addressBookAction->setIcon(QIcon(":/images/res/images/pixel.png"));
    addressBookAction->setCheckable(true);
    addressBookAction->setShortcut(QKeySequence(Qt::ALT + Qt::Key_5));
    tabGroup->addAction(addressBookAction);

    connect(overviewAction, SIGNAL(triggered()), this, SLOT(showNormalIfMinimized()));
    connect(overviewAction, SIGNAL(triggered()), this, SLOT(gotoOverviewPage()));
    connect(receiveCoinsAction, SIGNAL(triggered()), this, SLOT(showNormalIfMinimized()));
    connect(receiveCoinsAction, SIGNAL(triggered()), this, SLOT(gotoReceiveCoinsPage()));
    connect(sendCoinsAction, SIGNAL(triggered()), this, SLOT(showNormalIfMinimized()));
    connect(sendCoinsAction, SIGNAL(triggered()), this, SLOT(gotoSendCoinsPage()));
    connect(historyAction, SIGNAL(triggered()), this, SLOT(showNormalIfMinimized()));
    connect(historyAction, SIGNAL(triggered()), this, SLOT(gotoHistoryPage()));
    connect(addressBookAction, SIGNAL(triggered()), this, SLOT(showNormalIfMinimized()));
    connect(addressBookAction, SIGNAL(triggered()), this, SLOT(gotoAddressBookPage()));

    quitAction = new QAction(tr("E&xit"), this);
    quitAction->setToolTip(tr("Quit application"));
    quitAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
    quitAction->setMenuRole(QAction::QuitRole);
    aboutAction = new QAction(tr("&About Shard"), this);
    aboutAction->setToolTip(tr("Show information about Shard"));
    aboutAction->setMenuRole(QAction::AboutRole);
    aboutQtAction = new QAction(tr("About &Qt"), this);
    aboutQtAction->setToolTip(tr("Show information about Qt"));
    aboutQtAction->setMenuRole(QAction::AboutQtRole);
    optionsAction = new QAction(tr("&Options..."), this);
    optionsAction->setToolTip(tr("Modify configuration options for Shard"));
    optionsAction->setMenuRole(QAction::PreferencesRole);
    toggleHideAction = new QAction(QIcon(":/icons/bitcoin"), tr("&Show / Hide"), this);
    encryptWalletAction = new QAction(tr("&Encrypt Wallet..."), this);
    encryptWalletAction->setToolTip(tr("Encrypt or decrypt wallet"));
    backupWalletAction = new QAction(tr("&Backup Wallet..."), this);
    backupWalletAction->setToolTip(tr("Backup wallet to another location"));
    changePassphraseAction = new QAction(tr("&Change Passphrase..."), this);
    changePassphraseAction->setToolTip(tr("Change the passphrase used for wallet encryption"));
    unlockWalletAction = new QAction(tr("&Unlock Wallet..."), this);
    unlockWalletAction->setToolTip(tr("Unlock wallet"));
    lockWalletAction = new QAction(tr("&Lock Wallet"), this);
    lockWalletAction->setToolTip(tr("Lock wallet"));
    signMessageAction = new QAction(tr("Sign &message..."), this);
    verifyMessageAction = new QAction(tr("&Verify message..."), this);

    exportAction = new QAction(tr("&Export..."), this);
    exportAction->setToolTip(tr("Export the data in the current tab to a file"));
    openRPCConsoleAction = new QAction(tr("&Debug window"), this);
    openRPCConsoleAction->setToolTip(tr("Open debugging and diagnostic console"));




    lockActionBar= new QAction(QIcon(":/images/res/images/lock.png"),tr("&LOCK"), this);
    settingsActionBar= new QAction(QIcon(":/images/res/images/settings.png"),tr("&SETTINGS"), this);

    connect(settingsActionBar, SIGNAL(triggered()), this, SLOT(optionsClicked()));
    connect(lockActionBar, SIGNAL(triggered()), this, SLOT(toggleLock()));


    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(aboutClicked()));
    connect(aboutQtAction, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(optionsAction, SIGNAL(triggered()), this, SLOT(optionsClicked()));
    connect(toggleHideAction, SIGNAL(triggered()), this, SLOT(toggleHidden()));
    connect(encryptWalletAction, SIGNAL(triggered()), this, SLOT(encryptWallet()));
    connect(backupWalletAction, SIGNAL(triggered()), this, SLOT(backupWallet()));
    connect(changePassphraseAction, SIGNAL(triggered()), this, SLOT(changePassphrase()));
    connect(unlockWalletAction, SIGNAL(triggered()), this, SLOT(unlockWallet()));
    connect(lockWalletAction, SIGNAL(triggered()), this, SLOT(lockWallet()));
    connect(signMessageAction, SIGNAL(triggered()), this, SLOT(gotoSignMessageTab()));
    connect(verifyMessageAction, SIGNAL(triggered()), this, SLOT(gotoVerifyMessageTab()));

}

void BitcoinGUI::createMenuBar()
{
    // workaround for unity's global menu
    if (qgetenv("QT_QPA_PLATFORMTHEME") == "appmenu-qt5")
        appMenuBar = menuBar();
    else
        appMenuBar = new QMenuBar();

    // Configure the menus
    QMenu *file = appMenuBar->addMenu(tr("&File"));
    file->addAction(backupWalletAction);
    file->addAction(exportAction);
    file->addAction(signMessageAction);
    file->addAction(verifyMessageAction);
    file->addSeparator();
    file->addAction(quitAction);


    QMenu *settings = appMenuBar->addMenu(tr("&Settings"));
    settings->addAction(encryptWalletAction);
    settings->addAction(changePassphraseAction);
    settings->addAction(unlockWalletAction);
    settings->addAction(lockWalletAction);
    settings->addSeparator();
    settings->addAction(optionsAction);

    QMenu *help = appMenuBar->addMenu(tr("&Help"));
    help->addAction(openRPCConsoleAction);
    help->addSeparator();
    help->addAction(aboutAction);
    help->addAction(aboutQtAction);
}

static QWidget* makeToolBarSpacer()
{
    QWidget* spacer = new QWidget();
    spacer->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    spacer->setStyleSheet("QWidget { background: '#15202d'; }");
    return spacer;
}

void BitcoinGUI::createToolBars()
{
    toolbar = new QToolBar(tr("Tabs toolbar"));


    toolbar->setContextMenuPolicy(Qt::PreventContextMenu);

    toolbar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    toolbar->setStyleSheet("QToolBar { background: '#15202d';padding:0px;spacing:0px; }QToolButton:disabled { color:gray} QToolButton { padding: 10px;width: 100%;color:white;background: '#15202d'; margin:0px; border:none } QToolButton:hover{ background: '#1d2e3f'} QToolButton:checked{ background: '#1d2e3f'; font:bold;padding-left:15px; color:white;border-right:3px solid '#0adbf0'; }");

    logoMenu = new QLabel();


    logoMenu->setStyleSheet("QLabel { background-image:url(':/images/res/images/index.png');background-repeat:no-repeat; background-position: center bottom;background-color: '#15202d';padding:15px; padding-top:85px; } ");
    logoMenu->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    logoMenu->setFixedWidth(175);

    toolbar->addWidget(logoMenu);
    QLabel* bal = new QLabel(tr("SHARD BALANCE"));
     bal->setStyleSheet("QLabel { background: '#15202d';color:white;padding:5px;font:11pt 'Ubuntu';padding-top:15px  } ");
    bal->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    bal->setFixedWidth(175);
    toolbar->addWidget(bal);
    toolbar->setFixedWidth(175);
    balanceTotal= new QLabel("-");
    balanceTotal->setStyleSheet("QLabel { background: '#15202d';color:white;padding-bottom:15px;font:11pt 'Ubuntu'  } ");
    balanceTotal->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    balanceTotal->setFixedWidth(175);
    toolbar->addWidget(balanceTotal);
    toolbar->addAction(overviewAction);
    toolbar->addAction(receiveCoinsAction);
    toolbar->addAction(sendCoinsAction);
    toolbar->addAction(historyAction);
    toolbar->addAction(addressBookAction);

    toolbar->addWidget(makeToolBarSpacer());
    toolbar->addAction(settingsActionBar);
    toolbar->addAction(lockActionBar);


    toolbar->setOrientation(Qt::Vertical);
    toolbar->setMovable(false);



    addToolBar(Qt::LeftToolBarArea, toolbar);

    int w = 0;

    foreach(QAction *action, toolbar->actions()) {
        w = std::max(w, toolbar->widgetForAction(action)->width());
    }

    foreach(QAction *action, toolbar->actions()) {
        toolbar->widgetForAction(action)->setFixedWidth(w);
    }
}



void BitcoinGUI::setClientModel(ClientModel *clientModel)
{
    this->clientModel = clientModel;
    if(clientModel)
    {
        // Replace some strings and icons, when using the testnet
        if(clientModel->isTestNet())
        {
            setWindowTitle(windowTitle() + QString(" ") + tr("[testnet]"));
#ifndef Q_OS_MAC
            qApp->setWindowIcon(QIcon(":icons/bitcoin_testnet"));
            setWindowIcon(QIcon(":icons/bitcoin_testnet"));
#else
            MacDockIconHandler::instance()->setIcon(QIcon(":icons/bitcoin_testnet"));
#endif
            if(trayIcon)
            {
                trayIcon->setToolTip(tr("Shard client") + QString(" ") + tr("[testnet]"));
                trayIcon->setIcon(QIcon(":/icons/toolbar_testnet"));
                toggleHideAction->setIcon(QIcon(":/icons/toolbar_testnet"));
            }
        }

        // Keep up to date with client
        setNumConnections(clientModel->getNumConnections());
        connect(clientModel, SIGNAL(numConnectionsChanged(int)), this, SLOT(setNumConnections(int)));

        setNumBlocks(clientModel->getNumBlocks());
        connect(clientModel, SIGNAL(numBlocksChanged(int)), this, SLOT(setNumBlocks(int)));

        // Receive and report messages from network/worker thread
        connect(clientModel, SIGNAL(message(QString,QString,bool,unsigned int)), this, SLOT(message(QString,QString,bool,unsigned int)));

        overviewPage->setClientModel(clientModel);
        rpcConsole->setClientModel(clientModel);
        settingsPage->setClientModel(clientModel);
        addressBookPage->setOptionsModel(clientModel->getOptionsModel());
        receiveCoinsPage->setOptionsModel(clientModel->getOptionsModel());
    }
}

void BitcoinGUI::setWalletModel(WalletModel *walletModel)
{
    this->walletModel = walletModel;
    if(walletModel)
    {
        // Receive and report messages from wallet thread
        connect(walletModel, SIGNAL(message(QString,QString,bool,unsigned int)), this, SLOT(message(QString,QString,bool,unsigned int)));

        // Put transaction list in tabs
        transactionView->setModel(walletModel);
        overviewPage->setWalletModel(walletModel);
        addressBookPage->setModel(walletModel->getAddressTableModel());
        receiveCoinsPage->setModel(walletModel->getAddressTableModel());
        addressBookPage->setWalletModel(walletModel);
        sendCoinsPage->setModel(walletModel);
        signVerifyMessageDialog->setModel(walletModel);
        settingsPage->setWalletModel(walletModel);
        setEncryptionStatus(walletModel->getEncryptionStatus());
        connect(walletModel, SIGNAL(encryptionStatusChanged(int)), this, SLOT(setEncryptionStatus(int)));

        // Balloon pop-up for new transaction
        connect(walletModel->getTransactionTableModel(), SIGNAL(rowsInserted(QModelIndex,int,int)),
                this, SLOT(incomingTransaction(QModelIndex,int,int)));

        // Ask for passphrase if needed
        connect(walletModel, SIGNAL(requireUnlock()), this, SLOT(unlockWallet()));
        setBalance(walletModel->getBalance(),walletModel->getStake(),walletModel->getUnconfirmedBalance(),walletModel->getImmatureBalance());
        connect(walletModel, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), this, SLOT(setBalance(qint64, qint64, qint64, qint64)));
        connect(walletModel, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), sendCoinsPage, SLOT(setBalance(qint64, qint64, qint64, qint64)));
        settingsPage->setTransactionView(transactionView);

    }
}

void BitcoinGUI::createTrayIcon()
{
    QMenu *trayIconMenu;
#ifndef Q_OS_MAC
    trayIcon = new QSystemTrayIcon(this);
    trayIconMenu = new QMenu(this);
    trayIcon->setContextMenu(trayIconMenu);
    trayIcon->setToolTip(tr("Shard client"));
    trayIcon->setIcon(QIcon(":/icons/toolbar"));
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this, SLOT(trayIconActivated(QSystemTrayIcon::ActivationReason)));
    trayIcon->show();
#else
    // Note: On Mac, the dock icon is used to provide the tray's functionality.
    MacDockIconHandler *dockIconHandler = MacDockIconHandler::instance();
    dockIconHandler->setMainWindow((QMainWindow *)this);
    trayIconMenu = dockIconHandler->dockMenu();
#endif

    // Configuration of the tray icon (or dock icon) icon menu
    trayIconMenu->addAction(toggleHideAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(receiveCoinsAction);
    trayIconMenu->addAction(sendCoinsAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(signMessageAction);
    trayIconMenu->addAction(verifyMessageAction);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(optionsAction);
    trayIconMenu->addAction(openRPCConsoleAction);
#ifndef Q_OS_MAC // This is built-in on Mac
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(quitAction);
#endif

    notificator = new Notificator(qApp->applicationName(), trayIcon);
}



void BitcoinGUI::optionsClicked()
{
/*
    if(!clientModel || !clientModel->getOptionsModel())
        return;
    OptionsDialog dlg;
    dlg.setModel(clientModel->getOptionsModel());
    dlg.exec();*/
    overviewAction->setChecked(false);
    historyAction->setChecked(false);
    sendCoinsAction->setChecked(false);
    addressBookAction->setChecked(false);
    receiveCoinsAction->setChecked(false);
    topWidget->setVisible(false);
    centralStackedWidget->setCurrentWidget(settingsPage);
}

void BitcoinGUI::aboutClicked()
{
    AboutDialog dlg;
    dlg.setModel(clientModel);
    dlg.exec();
}

void BitcoinGUI::setNumConnections(int count)
{
    QString icon;
    switch(count)
    {
    case 0: icon = ":/icons/connect_0"; break;
    case 1: case 2: case 3: icon = ":/icons/connect_1"; break;
    case 4: case 5: case 6: icon = ":/icons/connect_2"; break;
    case 7: case 8: case 9: icon = ":/icons/connect_3"; break;
    default: icon = ":/icons/connect_4"; break;
    }
    labelConnectionsIcon->setPixmap(QIcon(icon).pixmap(STATUSBAR_ICONSIZE,STATUSBAR_ICONSIZE));
    labelConnectionsIcon->setToolTip(tr("%n active connection(s) to Shard network", "", count));
}

void BitcoinGUI::setNumBlocks(int count)
{
    // don't show / hide progress bar and its label if we have no connection to the network
    if (!clientModel || (clientModel->getNumConnections() == 0 && !clientModel->isImporting()))
    {
        statusBar()->setVisible(false);

        return;
    }

    bool fShowStatusBar = false;
    QString tooltip;

    QDateTime lastBlockDate = clientModel->getLastBlockDate();
    QDateTime currentDate = QDateTime::currentDateTime();
    int totalSecs = GetTime() - Params().GenesisBlock().GetBlockTime();
    int secs = lastBlockDate.secsTo(currentDate);

    tooltip = tr("Processed %1 blocks of transaction history.").arg(count);

    // Set icon state: spinning if catching up, tick otherwise
    if(secs < 90*60)
    {
        tooltip = tr("Up to date") + QString(".<br>") + tooltip;
        labelEncryptionIcon->setPixmap(QIcon(":/icons/synced").pixmap(STATUSBAR_ICONSIZE, STATUSBAR_ICONSIZE));
#if defined(Q_OS_WIN)

    // windows code goes here
    labelEncryptionText->setStyleSheet("color:#46c93f;font-size:12px;margin-left:12px");
#else
    //linux code goes here
    labelEncryptionText->setStyleSheet("color:#46c93f;font-size:12px;margin-left:5px");
#endif

        labelEncryptionText->setText(tr("Synced"));
        overviewPage->showOutOfSyncWarning(false);

        progressBarLabel->setVisible(false);
        progressBar->setVisible(false);
    }
    else
    {
        // Represent time from last generated block in human readable text
        QString timeBehindText;
        const int HOUR_IN_SECONDS = 60*60;
        const int DAY_IN_SECONDS = 24*60*60;
        const int WEEK_IN_SECONDS = 7*24*60*60;
        const int YEAR_IN_SECONDS = 31556952; // Average length of year in Gregorian calendar
        if(secs < 2*DAY_IN_SECONDS)
        {
            timeBehindText = tr("%n hour(s)","",secs/HOUR_IN_SECONDS);
        }
        else if(secs < 2*WEEK_IN_SECONDS)
        {
            timeBehindText = tr("%n day(s)","",secs/DAY_IN_SECONDS);
        }
        else if(secs < YEAR_IN_SECONDS)
        {
            timeBehindText = tr("%n week(s)","",secs/WEEK_IN_SECONDS);
        }
        else
        {
            int years = secs / YEAR_IN_SECONDS;
            int remainder = secs % YEAR_IN_SECONDS;
            timeBehindText = tr("%1 and %2").arg(tr("%n year(s)", "", years)).arg(tr("%n week(s)","", remainder/WEEK_IN_SECONDS));
        }

        progressBarLabel->setText(tr(clientModel->isImporting() ? "Importing blocks..." : "Synchronizing with network..."));
        progressBarLabel->setVisible(true);
        progressBar->setFormat(tr("%1 behind").arg(timeBehindText)+"            ");
        progressBar->setMaximum(totalSecs);
        progressBar->setValue(totalSecs - secs);
        progressBar->setVisible(true);
        fShowStatusBar = true;
        labelEncryptionIcon->setMovie(syncIconMovie);

#if defined(Q_OS_WIN)
    //linux code goes here
    labelEncryptionText->setStyleSheet("color:#fbb56d;font-size:12px;margin-left:12px");
#else
    // windows code goes here
    labelEncryptionText->setStyleSheet("color:#fbb56d;font-size:12px;margin-left:10px");
#endif


 labelEncryptionText->setText(tr("Syncing"));
        tooltip = tr("Catching up...") + QString("<br>") + tooltip;

        if(count != prevBlocks)
            syncIconMovie->jumpToNextFrame();
        prevBlocks = count;

        overviewPage->showOutOfSyncWarning(true);

        tooltip += QString("<br>");
        tooltip += tr("Last received block was generated %1 ago.").arg(timeBehindText);
        tooltip += QString("<br>");
        tooltip += tr("Transactions after this will not yet be visible.");
    }

    // Don't word-wrap this (fixed-width) tooltip
    tooltip = QString("<nobr>") + tooltip + QString("</nobr>");

    labelEncryptionIcon->setToolTip(tooltip);
    progressBarLabel->setToolTip(tooltip);
    progressBar->setToolTip(tooltip);

    statusBar()->setVisible(fShowStatusBar);
    QFont ft = progressBarLabel->font();
    QFontMetrics mt(ft);
#if defined(Q_OS_WIN)
    //linux code goes here
     progressBar->setFixedWidth(width()-mt.width(progressBarLabel->text())-35);
#else
    // windows code goes here
     progressBar->setFixedWidth(width()-mt.width(progressBarLabel->text()));
#endif

}

void BitcoinGUI::message(const QString &title, const QString &message, bool modal, unsigned int style)
{
    QString strTitle = tr("Shard") + " - ";
    // Default to information icon
    int nMBoxIcon = QMessageBox::Information;
    int nNotifyIcon = Notificator::Information;

    // Check for usage of predefined title
    switch (style) {
    case CClientUIInterface::MSG_ERROR:
        strTitle += tr("Error");
        break;
    case CClientUIInterface::MSG_WARNING:
        strTitle += tr("Warning");
        break;
    case CClientUIInterface::MSG_INFORMATION:
        strTitle += tr("Information");
        break;
    default:
        strTitle += title; // Use supplied title
    }

    // Check for error/warning icon
    if (style & CClientUIInterface::ICON_ERROR) {
        nMBoxIcon = QMessageBox::Critical;
        nNotifyIcon = Notificator::Critical;
    }
    else if (style & CClientUIInterface::ICON_WARNING) {
        nMBoxIcon = QMessageBox::Warning;
        nNotifyIcon = Notificator::Warning;
    }

    // Display message
    if (modal) {
        // Check for buttons, use OK as default, if none was supplied
        QMessageBox::StandardButton buttons;
        if (!(buttons = (QMessageBox::StandardButton)(style & CClientUIInterface::BTN_MASK)))
            buttons = QMessageBox::Ok;

        QMessageBox mBox((QMessageBox::Icon)nMBoxIcon, strTitle, message, buttons);
        mBox.exec();
    }
    else
        notificator->notify((Notificator::Class)nNotifyIcon, strTitle, message);
}

void BitcoinGUI::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
#ifndef Q_OS_MAC // Ignored on Mac
    if(e->type() == QEvent::WindowStateChange)
    {
        if(clientModel && clientModel->getOptionsModel()->getMinimizeToTray())
        {
            QWindowStateChangeEvent *wsevt = static_cast<QWindowStateChangeEvent*>(e);
            if(!(wsevt->oldState() & Qt::WindowMinimized) && isMinimized())
            {
                QTimer::singleShot(0, this, SLOT(hide()));
                e->ignore();
            }
        }
    }
#endif
}

void BitcoinGUI::closeEvent(QCloseEvent *event)
{
    if(clientModel)
    {
#ifndef Q_OS_MAC // Ignored on Mac
        if(!clientModel->getOptionsModel()->getMinimizeToTray() &&
           !clientModel->getOptionsModel()->getMinimizeOnClose())
        {
            qApp->quit();
        }

#endif
    }
    QMainWindow::closeEvent(event);
}

void BitcoinGUI::askFee(qint64 nFeeRequired, bool *payFee)
{
    if (!clientModel || !clientModel->getOptionsModel())
        return;
    QWidget* p = new QWidget(this);
    p->setStyleSheet("QWidget{color:white;background:'#0b1d2c'}QPushButton { \n background-color: #0d2131;margin-left:10px;\n	border:2px solid #1d2e3f;\ncolor:#eeeeee;\npadding:5px 15px;\n	outline: none;\nborder-radius:2px;\nmargin-right:9px;\n\n}\n\nQPushButton:pressed {\n   background-color: #1d2e3f;\nborder:2px solid gray;\n	color:white;\n\n}\n\nQPushButton:hover {\n     background-color: #102537;\n	border:2px solid #0f3e54;\n }\nQPushButton:checked { \n     background-color: #0d2131;\nborder:2px solid #0f3e54;\n	color:white;\n\n }\nQPushButton:disabled { \n    background:'#0b1d2c';\ncolor:gray;\nborder:2px solid #102537;\n }\n");

    QString strMessage = tr("This transaction is over the size limit. You can still send it for a fee of %1, "
        "which goes to the nodes that process your transaction and helps to support the network. "
        "Do you want to pay the fee?").arg(BitcoinUnits::formatWithUnit(clientModel->getOptionsModel()->getDisplayUnit(), nFeeRequired));
    QMessageBox::StandardButton retval = QMessageBox::question(
          p, tr("Confirm transaction fee"), strMessage,
          QMessageBox::Yes|QMessageBox::Cancel, QMessageBox::Yes);
    *payFee = (retval == QMessageBox::Yes);
}

void BitcoinGUI::incomingTransaction(const QModelIndex & parent, int start, int end)
{
    if(!walletModel || !clientModel)
        return;
    TransactionTableModel *ttm = walletModel->getTransactionTableModel();
    qint64 amount = ttm->index(start, TransactionTableModel::Amount, parent)
                    .data(Qt::EditRole).toULongLong();
    if(!clientModel->inInitialBlockDownload())
    {
        // On new transaction, make an info balloon
        // Unless the initial block download is in progress, to prevent balloon-spam
        QString date = ttm->index(start, TransactionTableModel::Date, parent)
                        .data().toString();
        QString type = ttm->index(start, TransactionTableModel::Type, parent)
                        .data().toString();
        QString address = ttm->index(start, TransactionTableModel::ToAddress, parent)
                        .data().toString();
        QIcon icon = qvariant_cast<QIcon>(ttm->index(start,
                            TransactionTableModel::ToAddress, parent)
                        .data(Qt::DecorationRole));

        notificator->notify(Notificator::Information,
                            (amount)<0 ? tr("Sent transaction") :
                                         tr("Incoming transaction"),
                              tr("Date: %1\n"
                                 "Amount: %2\n"
                                 "Type: %3\n"
                                 "Address: %4\n")
                              .arg(date)
                              .arg(BitcoinUnits::formatWithUnit(walletModel->getOptionsModel()->getDisplayUnit(), amount, true))
                              .arg(type)
                              .arg(address), icon);
    }
}

void BitcoinGUI::gotoOverviewPage()
{

    overviewAction->setChecked(true);
    topWidget->setVisible(true);
    centralStackedWidget->setCurrentWidget(overviewPage);


    exportAction->setEnabled(false);
    disconnect(exportAction, SIGNAL(triggered()), 0, 0);
}

void BitcoinGUI::gotoHistoryPage()
{
    historyAction->setChecked(true);
     topWidget->setVisible(true);
    centralStackedWidget->setCurrentWidget(transactionView);

    exportAction->setEnabled(true);
    transactionView->calculateHeight();
    disconnect(exportAction, SIGNAL(triggered()), 0, 0);
    connect(exportAction, SIGNAL(triggered()), transactionView, SLOT(exportClicked()));
}

void BitcoinGUI::gotoAddressBookPage()
{
    addressBookAction->setChecked(true);
    centralStackedWidget->setCurrentWidget(addressBookPage);
 topWidget->setVisible(true);
    exportAction->setEnabled(true);
    disconnect(exportAction, SIGNAL(triggered()), 0, 0);
    connect(exportAction, SIGNAL(triggered()), addressBookPage, SLOT(exportClicked()));
}

void BitcoinGUI::gotoReceiveCoinsPage()
{
    receiveCoinsAction->setChecked(true);
    centralStackedWidget->setCurrentWidget(receiveCoinsPage);
 topWidget->setVisible(true);
    exportAction->setEnabled(true);
    disconnect(exportAction, SIGNAL(triggered()), 0, 0);
    connect(exportAction, SIGNAL(triggered()), receiveCoinsPage, SLOT(exportClicked()));
}

void BitcoinGUI::gotoSendCoinsPage()
{
    sendCoinsAction->setChecked(true);
    centralStackedWidget->setCurrentWidget(sendCoinsPage);
 topWidget->setVisible(true);
    exportAction->setEnabled(false);
    disconnect(exportAction, SIGNAL(triggered()), 0, 0);
}

void BitcoinGUI::gotoSignMessageTab(QString addr)
{
    optionsClicked();
    settingsPage->setAddressSign(addr);
}

void BitcoinGUI::gotoVerifyMessageTab(QString addr)
{
    optionsClicked();
    settingsPage->setAddressVerify(addr);
}

void BitcoinGUI::dragEnterEvent(QDragEnterEvent *event)
{
    // Accept only URIs
    if(event->mimeData()->hasUrls())
        event->acceptProposedAction();
}


void BitcoinGUI::dropEvent(QDropEvent *event)
{
    if(event->mimeData()->hasUrls())
    {
        int nValidUrisFound = 0;
        QList<QUrl> uris = event->mimeData()->urls();
        foreach(const QUrl &uri, uris)
        {
            if (sendCoinsPage->handleURI(uri.toString()))
                nValidUrisFound++;
        }

        // if valid URIs were found
        if (nValidUrisFound)
            gotoSendCoinsPage();
        else
            notificator->notify(Notificator::Warning, tr("URI handling"), tr("URI can not be parsed! This can be caused by an invalid Shard address or malformed URI parameters."));
    }

    event->acceptProposedAction();
}

void BitcoinGUI::handleURI(QString strURI)
{
    // URI has to be valid
    if (sendCoinsPage->handleURI(strURI))
    {
        showNormalIfMinimized();
        gotoSendCoinsPage();
    }
    else
        notificator->notify(Notificator::Warning, tr("URI handling"), tr("URI can not be parsed! This can be caused by an invalid Shard address or malformed URI parameters."));
}

void BitcoinGUI::setEncryptionStatus(int status)
{
    switch(status)
    {
    case WalletModel::Unencrypted:
        //labelEncryptionIcon->setToolTip(tr("Wallet is <b>not encrypted</b>"));
        changePassphraseAction->setEnabled(false);
        unlockWalletAction->setVisible(false);
        lockWalletAction->setVisible(false);
        encryptWalletAction->setEnabled(true);
        lockActionBar->setEnabled(false);
        break;
    case WalletModel::Unlocked:
        lockActionBar->setText(tr("LOCK"));
        //labelEncryptionIcon->setToolTip(tr("Wallet is <b>encrypted</b> and currently <b>unlocked</b>"));
        changePassphraseAction->setEnabled(true);
        unlockWalletAction->setVisible(false);
        lockWalletAction->setVisible(true);
        encryptWalletAction->setEnabled(false); // TODO: decrypt currently not supported
        lockActionBar->setEnabled(true);
        break;
    case WalletModel::Locked:
        //labelEncryptionIcon->setToolTip(tr("Wallet is <b>encrypted</b> and currently <b>locked</b>"));
        changePassphraseAction->setEnabled(true);
        unlockWalletAction->setVisible(true);
        lockActionBar->setText(tr("UNLOCK"));
        lockWalletAction->setVisible(false);
        encryptWalletAction->setEnabled(false); // TODO: decrypt currently not supported
        lockActionBar->setEnabled(true);
        break;
    }
}

void BitcoinGUI::setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance){
    int unit = walletModel->getOptionsModel()->getDisplayUnit();
    balanceTotal->setText(BitcoinUnits::formatWithUnit(unit, balance).split(' ')[0]);
}

void BitcoinGUI::encryptWallet()
{
    if(!walletModel)
        return;

    AskPassphraseDialog dlg(AskPassphraseDialog::Encrypt, this);
    dlg.setModel(walletModel);
    dlg.exec();

    setEncryptionStatus(walletModel->getEncryptionStatus());
}

void BitcoinGUI::backupWallet()
{
    QString saveDir = QDesktopServices::storageLocation(QDesktopServices::DocumentsLocation);
    QString filename = QFileDialog::getSaveFileName(this, tr("Backup Wallet"), saveDir, tr("Wallet Data (*.dat)"));
    if(!filename.isEmpty()) {
        if(!walletModel->backupWallet(filename)) {
            QMessageBox::warning(this, tr("Backup Failed"), tr("There was an error trying to save the wallet data to the new location."));
        }
    }
}

void BitcoinGUI::changePassphrase()
{
    AskPassphraseDialog dlg(AskPassphraseDialog::ChangePass, this);
    dlg.setModel(walletModel);
    dlg.exec();
}

void BitcoinGUI::unlockWallet()
{
    if(!walletModel)
        return;
    // Unlock wallet when requested by wallet model
    if(walletModel->getEncryptionStatus() == WalletModel::Locked)
    {
        AskPassphraseDialog::Mode mode = sender() == unlockWalletAction ?
              AskPassphraseDialog::UnlockStaking : AskPassphraseDialog::Unlock;
        AskPassphraseDialog dlg(mode, this);
        dlg.setModel(walletModel);
        dlg.exec();
    }
}

void BitcoinGUI::lockWallet()
{
    if(!walletModel)
        return;

    walletModel->setWalletLocked(true);
}

void BitcoinGUI::toggleLock(){
    if(!walletModel)
        return;

    if(walletModel->getEncryptionStatus() == WalletModel::Locked)
    {
        AskPassphraseDialog::Mode mode = sender() == unlockWalletAction ?
              AskPassphraseDialog::UnlockStaking : AskPassphraseDialog::Unlock;
        AskPassphraseDialog dlg(mode, this);
        dlg.setModel(walletModel);
        dlg.exec();

    }else{
        bool lock = walletModel->setWalletLocked(true);

    }
}

void BitcoinGUI::showNormalIfMinimized(bool fToggleHidden)
{
    // activateWindow() (sometimes) helps with keyboard focus on Windows
    if (isHidden())
    {
        show();
        activateWindow();
    }
    else if (isMinimized())
    {
        showNormal();
        activateWindow();
    }
    else if (GUIUtil::isObscured(this))
    {
        raise();
        activateWindow();
    }
    else if(fToggleHidden)
        hide();
}

void BitcoinGUI::toggleHidden()
{
    showNormalIfMinimized(true);
}

void BitcoinGUI::updateWeight()
{


    if (!pwalletMain)
        return;

    TRY_LOCK(cs_main, lockMain);
    if (!lockMain)
        return;

    TRY_LOCK(pwalletMain->cs_wallet, lockWallet);
    if (!lockWallet)
        return;

    nWeight = 0;

    pwalletMain->GetStakeWeight(nMinWeight, nMaxWeight, nWeight);
}

void BitcoinGUI::updateStakingIcon()
{
    updateWeight();

    if (nLastCoinStakeSearchInterval && nWeight)
    {
        uint64_t nWeight = this->nWeight;
        uint64_t nNetworkWeight = GetPoSKernelPS();

        nWeight /= COIN;
        nNetworkWeight /= COIN;

        unsigned nEstimateTime = GetTargetSpacing(nBestHeight) * nNetworkWeight / nWeight;

        QString text;
        if (nEstimateTime < 60)
        {
            text = tr("%n second(s)", "", nEstimateTime);
        }
        else if (nEstimateTime < 60*60)
        {
            text = tr("%n minute(s)", "", nEstimateTime/60);
        }
        else if (nEstimateTime < 24*60*60)
        {
            text = tr("%n hour(s)", "", nEstimateTime/(60*60));
        }
        else
        {
            text = tr("%n day(s)", "", nEstimateTime/(60*60*24));
        }


        labelStakingIcon->setPixmap(QIcon(":/icons/staking_on").pixmap(STATUSBAR_ICONSIZE,STATUSBAR_ICONSIZE));
        labelStakingIcon->setToolTip(tr("Your weight is %1<br>Network weight is %2<br>Expected time to earn reward is %3").arg(nWeight).arg(nNetworkWeight).arg(text));
    }
    else
    {
        labelStakingIcon->setPixmap(QIcon(":/icons/staking_off").pixmap(STATUSBAR_ICONSIZE,STATUSBAR_ICONSIZE));
        if (pwalletMain && pwalletMain->IsLocked())
            labelStakingIcon->setToolTip(tr("Not staking because wallet is locked"));
        else if (vNodes.empty())
            labelStakingIcon->setToolTip(tr("Not staking because wallet is offline"));
        else if (IsInitialBlockDownload())
            labelStakingIcon->setToolTip(tr("Not staking because wallet is syncing"));
        else if (!nWeight)
            labelStakingIcon->setToolTip(tr("Not staking because you don't have mature coins"));
        else
            labelStakingIcon->setToolTip(tr("Not staking"));
    }
}

void BitcoinGUI::detectShutdown()
{
    if (ShutdownRequested())
        QMetaObject::invokeMethod(QCoreApplication::instance(), "quit", Qt::QueuedConnection);
}
