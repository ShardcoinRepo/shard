#include "listtransactions.h"
#include "transactiontablemodel.h"
#include <QScrollBar>
ListTransactions::ListTransactions(QWidget *parent):
   QListView(parent)
{
   // We need to enable mouse-tracking because we need to know
   // about every mouse-movement.
   setMouseTracking(true);
   verticalScrollBar()->setStyleSheet("QScrollBar:vertical\n{\nbackground: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));\n}\nQScrollBar::handle:vertical\n{\nbackground: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n       stop: 0 rgb(0, 47, 72), stop: 0.5 rgb(0, 51, 78), stop:1 rgb(0, 47, 52));\n\n}\nQScrollBar::add-line:vertical\n{\nbackground: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));\n}\nQScrollBar::sub-line:vertical\n{\nbackground: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n       stop: 0 rgb(3, 32, 52), stop: 0.5 rgb(4, 35, 58), stop:1 rgb(3, 32, 52));\n}");

}


void ListTransactions::mouseMoveEvent(QMouseEvent *event)
{
   QAbstractItemModel *m(model());
   // Only do something when a model is set.
   if (m)
   {
      QModelIndex index = indexAt(event->pos());

      if (index.isValid())
      {
          int orgura = 60;
          if(width() > 650)
              orgura = 85;
         // When the index is valid, compare it to the last row.
         // Only do something when the the mouse has moved to a new row.
            QRect recIndex = visualRect(index);

          if ((event->pos().x() >=  pos().x() + width()-orgura))
          {

                  setCursor(Qt::PointingHandCursor);
          }
          else
          {

              setCursor(Qt::ArrowCursor);
          }
          if(recIndex.height() > 64){
              if(recIndex.width() < 650)
              {
                 if(event->pos().y() > recIndex.y() + recIndex.height()/2.5)
                    setCursor(Qt::PointingHandCursor);
                 else if(event->pos().x() <  width()-orgura)
                    setCursor(Qt::ArrowCursor);
              }
              else{
#if defined(Q_OS_WIN)
                  if(event->pos().y() > recIndex.bottomLeft().y()-40 && event->pos().y() < recIndex.bottomLeft().y()-20 && event->pos().x() <  width()/2)
                  {
                     setCursor(Qt::PointingHandCursor);

                  }
                  else if(event->pos().x() <  width()-orgura)
                  {
                     setCursor(Qt::ArrowCursor);

                  }
#else
                  if(event->pos().y() > recIndex.bottomLeft().y()-30 && event->pos().y() < recIndex.bottomLeft().y()-10 && event->pos().x() <  width()/2)
                  {
                     setCursor(Qt::PointingHandCursor);

                  }
                  else if(event->pos().x() <  width()-orgura)
                  {
                     setCursor(Qt::ArrowCursor);

                  }
#endif

              }
          }else if(event->pos().x() <  width()-orgura){
             setCursor(Qt::ArrowCursor);

          }


      }

   }
   QListView::mouseMoveEvent(event);
}
QEvent* auxEvent;
void ListTransactions::forceRedraw(){
    if(auxEvent)
        enterEvent(auxEvent);
}

void ListTransactions::leaveEvent(QEvent * event){
    QListView::leaveEvent(event);
    setCursor(Qt::ArrowCursor);
}
void ListTransactions::wheelEvent(QWheelEvent* event){
    event->ignore();
}

void ListTransactions::enterEvent(QEvent * event){
    auxEvent = event;
    QListView::enterEvent(event);
    // Only do something when a model is set.

       QModelIndex index = indexAt(QCursor::pos());

       if (index.isValid())
       {
          // When the index is valid, compare it to the last row.
          // Only do something when the the mouse has moved to a new row.
           QRect recIndex = visualRect(index);

          if (QCursor::pos().x() >=  x() + width()-60)
          {
             setCursor(Qt::PointingHandCursor);

          }else{
              setCursor(Qt::ArrowCursor);
          }
          if(recIndex.height() > 64){
            if(QCursor::pos().y() > recIndex.y() + recIndex.height()/2.5)
                setCursor(Qt::PointingHandCursor);
            else if(QCursor::pos().x() <  width()-60)
                setCursor(Qt::ArrowCursor);
          }else if(QCursor::pos().x() <  width()-60){
             setCursor(Qt::ArrowCursor);
          }
       }



}
