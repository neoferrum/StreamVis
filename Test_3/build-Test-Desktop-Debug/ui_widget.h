/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxInput;
    QGroupBox *groupBoxCellsCount;
    QLabel *label;
    QSpinBox *spinBox_nx;
    QLabel *label_2;
    QSpinBox *spinBox_ny;
    QGroupBox *groupBox_Coords;
    QDoubleSpinBox *doubleSpinBox_x0;
    QDoubleSpinBox *doubleSpinBox_y0;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *groupBoxCells;
    QDoubleSpinBox *doubleSpinBox_dx;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_dy;
    QGroupBox *groupBox_V;
    QDoubleSpinBox *doubleSpinBox_vx1;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_vx2;
    QLabel *label_9;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_vy1;
    QDoubleSpinBox *doubleSpinBox_vy2;
    QPushButton *pushButtonCalculate;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(829, 374);
        groupBoxInput = new QGroupBox(Widget);
        groupBoxInput->setObjectName(QStringLiteral("groupBoxInput"));
        groupBoxInput->setGeometry(QRect(20, 10, 431, 211));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        groupBoxInput->setFont(font);
        groupBoxCellsCount = new QGroupBox(groupBoxInput);
        groupBoxCellsCount->setObjectName(QStringLiteral("groupBoxCellsCount"));
        groupBoxCellsCount->setGeometry(QRect(0, 35, 191, 81));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        groupBoxCellsCount->setFont(font1);
        label = new QLabel(groupBoxCellsCount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 25, 111, 21));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        label->setFont(font2);
        spinBox_nx = new QSpinBox(groupBoxCellsCount);
        spinBox_nx->setObjectName(QStringLiteral("spinBox_nx"));
        spinBox_nx->setGeometry(QRect(120, 25, 51, 22));
        QFont font3;
        font3.setItalic(false);
        spinBox_nx->setFont(font3);
        spinBox_nx->setValue(5);
        label_2 = new QLabel(groupBoxCellsCount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 50, 101, 20));
        label_2->setFont(font2);
        spinBox_ny = new QSpinBox(groupBoxCellsCount);
        spinBox_ny->setObjectName(QStringLiteral("spinBox_ny"));
        spinBox_ny->setGeometry(QRect(120, 50, 51, 22));
        spinBox_ny->setFont(font3);
        spinBox_ny->setValue(5);
        groupBox_Coords = new QGroupBox(groupBoxInput);
        groupBox_Coords->setObjectName(QStringLiteral("groupBox_Coords"));
        groupBox_Coords->setGeometry(QRect(190, 35, 241, 71));
        groupBox_Coords->setFont(font1);
        doubleSpinBox_x0 = new QDoubleSpinBox(groupBox_Coords);
        doubleSpinBox_x0->setObjectName(QStringLiteral("doubleSpinBox_x0"));
        doubleSpinBox_x0->setGeometry(QRect(50, 37, 71, 22));
        doubleSpinBox_x0->setFont(font3);
        doubleSpinBox_x0->setMaximum(300);
        doubleSpinBox_x0->setValue(45);
        doubleSpinBox_y0 = new QDoubleSpinBox(groupBox_Coords);
        doubleSpinBox_y0->setObjectName(QStringLiteral("doubleSpinBox_y0"));
        doubleSpinBox_y0->setGeometry(QRect(170, 37, 71, 22));
        doubleSpinBox_y0->setFont(font3);
        doubleSpinBox_y0->setMaximum(300);
        doubleSpinBox_y0->setValue(5);
        label_11 = new QLabel(groupBox_Coords);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(25, 37, 41, 21));
        label_11->setFont(font2);
        label_12 = new QLabel(groupBox_Coords);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(145, 37, 41, 21));
        label_12->setFont(font2);
        groupBoxCells = new QGroupBox(groupBoxInput);
        groupBoxCells->setObjectName(QStringLiteral("groupBoxCells"));
        groupBoxCells->setGeometry(QRect(0, 120, 191, 81));
        groupBoxCells->setFont(font1);
        doubleSpinBox_dx = new QDoubleSpinBox(groupBoxCells);
        doubleSpinBox_dx->setObjectName(QStringLiteral("doubleSpinBox_dx"));
        doubleSpinBox_dx->setGeometry(QRect(100, 30, 71, 22));
        doubleSpinBox_dx->setFont(font3);
        doubleSpinBox_dx->setValue(20);
        label_5 = new QLabel(groupBoxCells);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 30, 61, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(groupBoxCells);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 55, 61, 21));
        label_6->setFont(font2);
        doubleSpinBox_dy = new QDoubleSpinBox(groupBoxCells);
        doubleSpinBox_dy->setObjectName(QStringLiteral("doubleSpinBox_dy"));
        doubleSpinBox_dy->setGeometry(QRect(100, 55, 71, 22));
        doubleSpinBox_dy->setFont(font3);
        doubleSpinBox_dy->setValue(20);
        groupBox_V = new QGroupBox(groupBoxInput);
        groupBox_V->setObjectName(QStringLiteral("groupBox_V"));
        groupBox_V->setGeometry(QRect(190, 120, 241, 80));
        groupBox_V->setFont(font1);
        doubleSpinBox_vx1 = new QDoubleSpinBox(groupBox_V);
        doubleSpinBox_vx1->setObjectName(QStringLiteral("doubleSpinBox_vx1"));
        doubleSpinBox_vx1->setGeometry(QRect(50, 30, 71, 22));
        doubleSpinBox_vx1->setFont(font3);
        doubleSpinBox_vx1->setValue(1);
        label_7 = new QLabel(groupBox_V);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 30, 41, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(groupBox_V);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 55, 41, 21));
        label_8->setFont(font2);
        doubleSpinBox_vx2 = new QDoubleSpinBox(groupBox_V);
        doubleSpinBox_vx2->setObjectName(QStringLiteral("doubleSpinBox_vx2"));
        doubleSpinBox_vx2->setGeometry(QRect(50, 55, 71, 22));
        doubleSpinBox_vx2->setFont(font3);
        doubleSpinBox_vx2->setValue(16);
        label_9 = new QLabel(groupBox_V);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 30, 41, 21));
        label_9->setFont(font2);
        label_10 = new QLabel(groupBox_V);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(130, 55, 41, 21));
        label_10->setFont(font2);
        doubleSpinBox_vy1 = new QDoubleSpinBox(groupBox_V);
        doubleSpinBox_vy1->setObjectName(QStringLiteral("doubleSpinBox_vy1"));
        doubleSpinBox_vy1->setGeometry(QRect(170, 30, 71, 22));
        doubleSpinBox_vy1->setFont(font3);
        doubleSpinBox_vy1->setValue(0);
        doubleSpinBox_vy2 = new QDoubleSpinBox(groupBox_V);
        doubleSpinBox_vy2->setObjectName(QStringLiteral("doubleSpinBox_vy2"));
        doubleSpinBox_vy2->setGeometry(QRect(170, 55, 71, 22));
        doubleSpinBox_vy2->setFont(font3);
        doubleSpinBox_vy2->setValue(0);
        pushButtonCalculate = new QPushButton(Widget);
        pushButtonCalculate->setObjectName(QStringLiteral("pushButtonCalculate"));
        pushButtonCalculate->setGeometry(QRect(340, 220, 111, 41));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(25, 220, 301, 131));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(500, 50, 301, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QString());
        groupBoxInput->setTitle(QApplication::translate("Widget", "\320\222\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", 0));
        groupBoxCellsCount->setTitle(QApplication::translate("Widget", "     \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\217\321\207\320\265\320\265\320\272      ", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">\320\277\320\276 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\320\270:</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">\320\277\320\276 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\320\270:</span></p></body></html>", 0));
        groupBox_Coords->setTitle(QApplication::translate("Widget", "   \320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\271 \321\202\320\276\321\207\320\272\320\270  ", 0));
        label_11->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">X =</span></p></body></html>", 0));
        label_12->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">Y =</span></p></body></html>", 0));
        groupBoxCells->setTitle(QApplication::translate("Widget", "        \320\240\320\260\320\267\320\274\320\265\321\200\321\213 \321\217\321\207\320\265\320\265\320\272        ", 0));
        label_5->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">\321\210\320\270\321\200\320\270\320\275\320\260:</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">\320\262\321\213\321\201\320\276\321\202\320\260:</span></p></body></html>", 0));
        groupBox_V->setTitle(QApplication::translate("Widget", "     \320\241\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\275\320\260 \320\263\321\200\320\260\320\275\320\270\321\206\320\260\321\205 \320\277\320\276\320\273\321\217      ", 0));
        label_7->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">Vx1 =</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">Vx2 =</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">Vy1 =</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:400;\">Vy2 =</span></p></body></html>", 0));
        pushButtonCalculate->setText(QApplication::translate("Widget", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
