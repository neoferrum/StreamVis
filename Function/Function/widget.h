#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "drawwidget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

   // layout(line_strip) in;

private:
    Ui::Widget *ui;
    DrawWidget *wgt;
};

#endif // WIDGET_H
