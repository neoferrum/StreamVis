#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "glwidget.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_spinBoxNx_valueChanged(int arg1);

    void on_spinBoxNy_valueChanged(int arg1);

    void on_doubleSpinBoxDx_valueChanged(double arg1);

private:
    Ui::Widget *ui;
    GLWidget *widget;
};

#endif // WIDGET_H
