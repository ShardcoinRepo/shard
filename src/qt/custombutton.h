#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QWidget>
class QPushButton;
class QLabel;
class QEvent;
class CustomButton : public QWidget
{
    Q_OBJECT
public:
    explicit CustomButton(QWidget *parent = 0);
    QPushButton* ui_send;
    QLabel* label;

    void setImage(QString filename);

    void setName(QString name);

signals:
    void clicked();
private:
    bool hover = false;
      bool eventFilter(QObject *, QEvent *);
      QString _filename;
      bool pressed = false;
public slots:
      void emitClick();
};

#endif // CUSTOMBUTTON_H
