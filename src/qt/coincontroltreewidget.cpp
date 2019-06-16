#include "coincontroltreewidget.h"
#include "coincontroldialog.h"
#include <QScrollBar>

CoinControlTreeWidget::CoinControlTreeWidget(QWidget *parent) :
    QTreeWidget(parent)
{
    verticalScrollBar()->setStyleSheet("QScrollBar{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::handle{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(0, 47, 72), stop: 0.5 rgb(0, 51, 78), stop:1 rgb(0, 47, 52));}QScrollBar::add-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::sub-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::handle{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(0, 47, 72), stop: 0.5 rgb(0, 51, 78), stop:1 rgb(0, 47, 52));}QScrollBar::add-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::sub-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}");
    horizontalScrollBar()->setStyleSheet("QScrollBar{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::handle{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(0, 47, 72), stop: 0.5 rgb(0, 51, 78), stop:1 rgb(0, 47, 52));}QScrollBar::add-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::sub-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::handle{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(0, 47, 72), stop: 0.5 rgb(0, 51, 78), stop:1 rgb(0, 47, 52));}QScrollBar::add-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}QScrollBar::sub-line{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));}");

}

void CoinControlTreeWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space) // press spacebar -> select checkbox
    {
        event->ignore();
        int COLUMN_CHECKBOX = 0;
        this->currentItem()->setCheckState(COLUMN_CHECKBOX, ((this->currentItem()->checkState(COLUMN_CHECKBOX) == Qt::Checked) ? Qt::Unchecked : Qt::Checked));
    }
    else if (event->key() == Qt::Key_Escape) // press esc -> close dialog
    {
        event->ignore();
        CoinControlDialog *coinControlDialog = (CoinControlDialog*)this->parentWidget();
        coinControlDialog->done(QDialog::Accepted);
    }
    else
    {
        this->QTreeWidget::keyPressEvent(event);
    }
}
