#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "field.h"

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
    void on_pushButtonCalculate_clicked();

private:
    Field field;
    Ui::Widget *ui;

    void Generate(Ui::Widget *ui);
    void Calculate();
};

#endif // WIDGET_H
