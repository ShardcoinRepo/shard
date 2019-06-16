#include "custombutton.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>
CustomButton::CustomButton(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout* verticalLayout_13 = new QVBoxLayout(this);
    verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
    verticalLayout_13->setContentsMargins(0, 0, 0, 0);
    verticalLayout_13->setSpacing(0);
    ui_send = new QPushButton(this);
    ui_send->setObjectName(QStringLiteral("ui_receive"));

    ui_send->setMinimumSize(QSize(0, 103));
    ui_send->setMaximumSize(QSize(16777215, 103));
    ui_send->setStyleSheet(QLatin1String("border:0px;\n"
"background-image:url(:/images/res/images/dashboard_receive.png);\n"
"background-repeat:no-repeat;\n"
                                         "background-color:transparent;\n"
"background-position: center;\n"
"outline:none;"));
    ui_send->setAutoExclusive(false);

    verticalLayout_13->addWidget(ui_send);

    label = new QLabel(this);
    label->setObjectName(QStringLiteral("label"));
    QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy6);
    label->setMinimumSize(QSize(0, 48));
    label->setMaximumSize(QSize(16777215, 48));
    label->setWordWrap(true);
    label->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"border:0px"));
    label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
    label->setMargin(0);

    verticalLayout_13->addWidget(label);

    setFixedWidth(120);

    installEventFilter(this);
    setStyleSheet("background:'#0d2131';border:0px");

     label->setStyleSheet("color:white;background:'#0d2131';");
     ui_send->setStyleSheet("border:0px;\n"
     "background-image:url(:/images/res/images/dashboard_recieve.png);\n"
     "background-repeat:no-repeat;\n"
     "background-color:#0d2131;\n"
     "background-position: center;\n"
     "outline:none;");

     installEventFilter(label);
     installEventFilter(ui_send);

     connect(ui_send,SIGNAL(clicked(bool)),this,SLOT(emitClick()));


}
void CustomButton::emitClick(){
    emit clicked();
}

void CustomButton::setImage(QString filename)
{
    _filename = filename;
    setStyleSheet("background:'#0d2131';border:0px");
    label->setStyleSheet("color:white;background:'#0d2131';");
    ui_send->setStyleSheet("border:0px;\n"
       "background-image:url(:/images/res/images/"+_filename+".png);\n"
       "background-repeat:no-repeat;\n"
       "background-color:#0d2131;\n"
       "background-position: center;\n"
       "outline:none;");
}

void CustomButton::setName(QString name)
{
    label->setText(name);
}



bool CustomButton::eventFilter(QObject *object, QEvent *event)
{
 if((object == this || object == label || object == ui_send) && (event->type() == QEvent::Enter || event->type() == QEvent::Leave))
 {
       if(event->type() == QEvent::Enter)
       {
           setStyleSheet("background:'#0f283c';border:0px");
           label->setStyleSheet("color:white;background:'#0f283c';");
           ui_send->setStyleSheet("border:0px;\n"
               "background-image:url(:/images/res/images/"+_filename+".png);\n"
               "background-repeat:no-repeat;\n"
               "background-color:#0f283c;\n"
               "background-position: center;\n"
               "outline:none;");
           setCursor(Qt::PointingHandCursor);

        }
        else{
             setCursor(Qt::ArrowCursor);
             setStyleSheet("background:'#0d2131';border:0px");
             label->setStyleSheet("color:white;background:'#0d2131';");
             ui_send->setStyleSheet("border:0px;\n"
                "background-image:url(:/images/res/images/"+_filename+".png);\n"
                "background-repeat:no-repeat;\n"
                "background-color:#0d2131;\n"
                "background-position: center;\n"
                "outline:none;");

        }
 }
 if((object == this || object == label || object == ui_send) && (event->type() == QEvent::MouseButtonPress))
 {
     emit clicked();
 }
 return QWidget::eventFilter(object,event);

}
