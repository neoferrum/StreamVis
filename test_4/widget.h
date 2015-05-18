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
    void onNxChanged(int value);
    void onNyChanged(int value);
    void onDxChanged(double value);
    void onDyChanged(double value);

private:
    Ui::Widget *ui;
    GLWidget *widget;
};

#endif // WIDGET_H
