#ifndef SENDCOINSDIALOG_H
#define SENDCOINSDIALOG_H

#include <QWidget>
#include <QString>


namespace Ui {
    class SendCoinsDialog;

}
class WalletModel;
class SendCoinsEntry;
class SendCoinsRecipient;
class CoinControlDialog;

QT_BEGIN_NAMESPACE
class QUrl;

QT_END_NAMESPACE

/** Dialog for sending bitcoins */
class SendCoinsDialog : public QWidget
{
    Q_OBJECT

public:
    explicit SendCoinsDialog(QWidget *parent = 0);
    ~SendCoinsDialog();

    void setModel(WalletModel *model);

    /** Set up the tab chain manually, as Qt messes up the tab chain by default in some cases (issue https://bugreports.qt-project.org/browse/QTBUG-10907).
     */
    QWidget *setupTabChain(QWidget *prev);

    void pasteEntry(const SendCoinsRecipient &rv);
    bool handleURI(const QString &uri);
    bool fSplitBlock;




    void setAmount(QString amount);
    void setControlChangeText(bool en);
    void setCoinControlChange(QString text,QString style,bool en);

    // stats


    void setPayFee(QString text);

    void setCoinControlAfterFee(QString text);
    // After Fee

    void setCoinControlInsuffFunds(bool en);


public slots:
    void clear();
    void reject();
    void accept();
    SendCoinsEntry *addEntry();
    void updateRemoveEnabled();
    void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);

private:
    Ui::SendCoinsDialog *ui;
    WalletModel *model;
    bool fNewRecipientAllowed;
    CoinControlDialog* dlg;

private slots:
    void on_sendButton_clicked();
    void removeEntry(SendCoinsEntry* entry);
    void updateDisplayUnit();
    void coinControlFeatureChanged(bool);
    void coinControlButtonClicked();
    void coinControlChangeChecked(int);
    void coinControlChangeEdited(const QString &);
    void coinControlUpdateLabels();
    void coinControlClipboardQuantity();
    void coinControlClipboardAmount();
    void coinControlClipboardFee();
    void coinControlClipboardAfterFee();



    void coinControlClipboardChange();
    void coinControlSplitBlockChecked(int);
    void splitBlockLineEditChanged(const QString & text);
};

#endif // SENDCOINSDIALOG_H
