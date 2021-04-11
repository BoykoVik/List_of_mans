/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QTableView *tableView;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *page_2;
    QTableView *tableView_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(790, 528);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 113, 20));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 70, 113, 20));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(110, 100, 113, 20));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 47, 13));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 19, 13));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 110, 49, 13));
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(540, 20, 113, 20));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 30, 49, 13));
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 180, 161, 21));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 180, 68, 13));
        lineEdit_6 = new QLineEdit(page);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 230, 161, 20));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 230, 110, 13));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 140, 49, 13));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 130, 131, 22));
        tableView = new QTableView(page);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(495, 70, 181, 291));
        lineEdit_7 = new QLineEdit(page);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 340, 31, 20));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 340, 47, 13));
        lineEdit_8 = new QLineEdit(page);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 370, 113, 20));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 370, 68, 13));
        lineEdit_9 = new QLineEdit(page);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(120, 400, 113, 20));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 400, 83, 13));
        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(230, 340, 31, 20));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 340, 47, 13));
        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 310, 76, 13));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 400, 75, 23));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 40, 75, 23));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 380, 75, 23));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 20, 661, 431));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\320\230\320\274\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\262\320\270\320\267\321\213", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\320\241\321\200\320\276\320\272 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217 \320\262\320\270\320\267\321\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\320\260", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\320\241\320\265\321\200\320\270\321\217", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\264\320\260\321\207\320\270", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\320\224\320\260\321\202\320\260 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\320\227\320\260\320\263\321\200\320\260\320\275\320\277\320\260\321\201\320\277\320\276\321\200\321\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
