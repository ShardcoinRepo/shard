#include "titlebar.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QEvent>
#include <QMouseEvent>
Titlebar::Titlebar(QWidget *parent) : QWidget(parent),m_parent(parent)
{
    setStyleSheet("background:transparent");
    QHBoxLayout* ltTop = new QHBoxLayout(this);

    ltTop->setMargin(0);

    QPushButton* closeActiona = new QPushButton();

    closeActiona->setStyleSheet("QPushButton{margin:0px;border:0px;background-color:transparent;outline:none;background-image:url(:/images/res/images/close.png);background-repeat:no-repeat;background-position: center;padding:10px 3px;} QPushButton:hover{background-color:#003750} QPushButton:pressed{background-color:#002d3f}");

    maxActiona = new QPushButton();
    maxActiona->setStyleSheet("QPushButton{margin:0px;border:0px;background-color:transparent;outline:none;background-image:url(:/images/res/images/max.png);background-repeat:no-repeat;background-position: center;padding:10px 3px;} QPushButton:hover{background-color:#003750} QPushButton:pressed{background-color:#002d3f}");
    QPushButton* minimizectiona = new QPushButton();

    minimizectiona->setStyleSheet("QPushButton{margin:0px;border:0px;background-color:transparent;outline:none;background-image:url(:/images/res/images/minimize.png);background-repeat:no-repeat;background-position: center;padding:10px 3px;} QPushButton:hover{background-color:#003750} QPushButton:pressed{background-color:#002d3f}");

    ltTop->addStretch();
    ltTop->addWidget(minimizectiona);
    ltTop->addWidget(maxActiona);
    ltTop->addWidget(closeActiona);

    connect(closeActiona,SIGNAL(clicked()),this,SLOT(closeWidget()));
    connect(minimizectiona,SIGNAL(clicked()),this,SLOT(minimizeWidget()));
    connect(maxActiona,SIGNAL(clicked()),this,SLOT(maximizeWidget()));


    installEventFilter(this);

}
void Titlebar::closeWidget(){ emit closeApp();}
void Titlebar::maximizeWidget(){

    Qt::WindowStates state = m_parent->windowState();
    if(state == Qt::WindowMaximized)
    {
        maxActiona->setStyleSheet("QPushButton{margin:0px;border:0px;background-color:transparent;outline:none;background-image:url(:/images/res/images/max.png);background-repeat:no-repeat;background-position: center;padding:10px 3px;} QPushButton:hover{background-color:#003750} QPushButton:pressed{background-color:#002d3f}");
    }
    else
    {
        maxActiona->setStyleSheet("QPushButton{margin:0px;border:0px;background-color:transparent;outline:none;background-image:url(:/images/res/images/window.png);background-repeat:no-repeat;background-position: center;padding:10px 3px;} QPushButton:hover{background-color:#003750} QPushButton:pressed{background-color:#002d3f}");
    }

    emit maximizeApp();
}
void Titlebar::minimizeWidget(){ emit minimizeApp();}



void Titlebar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_pCursor = event->globalPos() - m_parent->geometry().topLeft();
        event->accept();
    }
}

void Titlebar::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        m_parent->move(event->globalPos() - m_pCursor);
        event->accept();
    }
}
