#include "qvalidatedlineedit.h"

#include "guiconstants.h"

QValidatedLineEdit::QValidatedLineEdit(QWidget *parent) :
    QLineEdit(parent), valid(true)
{
    default_style= "background:#1d2e3f;\ncolor:white;\npadding:7px;\nborder-radius:5px;\nfont: 10pt 'Ubuntu';\nmargin-bottom:2px;";

    connect(this, SIGNAL(textChanged(QString)), this, SLOT(markValid()));
}

void QValidatedLineEdit::setValid(bool valid)
{
    if(default_style == "")
        default_style= ((QWidget*)parent())->styleSheet();
    if(valid == this->valid)
    {
        return;
    }

    if(valid)
    {
        setStyleSheet(default_style);
    }
    else
    {
        setStyleSheet(default_style+STYLE_INVALID);
    }
    this->valid = valid;
}

void QValidatedLineEdit::focusInEvent(QFocusEvent *evt)
{
    // Clear invalid flag on focus
    setValid(true);
    QLineEdit::focusInEvent(evt);
}

void QValidatedLineEdit::markValid()
{
    setValid(true);
}

void QValidatedLineEdit::clear()
{
    setValid(true);
    QLineEdit::clear();
}
