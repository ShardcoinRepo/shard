#ifndef LISTTRANSACTIONS_H
#define LISTTRANSACTIONS_H

#include <QMouseEvent>
#include <QListView>


class ListTransactions : public QListView{
    Q_OBJECT

 public:
    ListTransactions(QWidget *parent = 0);
    void forceRedraw();
 protected:
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void leaveEvent(QEvent * event);
     virtual void enterEvent(QEvent * event);
    virtual void wheelEvent(QWheelEvent* event);
 private:
    // m_LastRow stores the row the mouse was over the last time
    // mouseMoveEvent() was called. This is used to minimize calls to the
    // model's data() function. m_lastRow is -1 when no valid row was hovered by
    // the mouse.

signals:
    void transactionClicked(const QModelIndex &index);

};

#endif // LISTTRANSACTIONS_H
