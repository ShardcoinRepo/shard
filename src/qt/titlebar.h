#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QWidget>
#include <QPoint>
class QPushButton;
class Titlebar : public QWidget
{
    Q_OBJECT
public:
    explicit Titlebar(QWidget *parent = 0);
    bool pressed;
private:


    QPushButton* maxActiona;
    QPoint m_pCursor;
    bool isMoving{false};
    QWidget* m_parent;
protected:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

signals:
    void closeApp();
    void maximizeApp();
    void minimizeApp();
public slots:
    void closeWidget();
    void maximizeWidget();
    void minimizeWidget();
};

#endif // TITLEBAR_H
