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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *lineEdit_10;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton;
    QFormLayout *formLayout_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QTableView *tableView_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_4;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QSpinBox *spinBox;
    QTableWidget *tableWidget;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(790, 528);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/icons8-user-male-120.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_5 = new QGridLayout(page_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 4, 0, 1, 1);

        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(150, 50));
        pushButton_6->setMaximumSize(QSize(150, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/130905.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(25, 25));

        gridLayout_5->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(150, 50));
        pushButton_8->setMaximumSize(QSize(150, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/icons8-tinder-120.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(25, 25));

        gridLayout_5->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(page_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(150, 50));
        pushButton_7->setMaximumSize(QSize(150, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/9349830101558424430-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(25, 25));

        gridLayout_5->addWidget(pushButton_7, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        tableView = new QTableView(page);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 30));
        pushButton_3->setMaximumSize(QSize(80, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/14458160321582004493-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        verticalLayout->addWidget(pushButton_3);


        gridLayout_4->addLayout(verticalLayout, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(80, 30));
        pushButton_9->setMaximumSize(QSize(80, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ico/130874.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon5);

        gridLayout_4->addWidget(pushButton_9, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(page);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_12);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        lineEdit_7 = new QLineEdit(page);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_2->addWidget(lineEdit_7);


        formLayout->setLayout(7, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_3->addWidget(label_11);

        lineEdit_10 = new QLineEdit(page);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        horizontalLayout_3->addWidget(lineEdit_10);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_3);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEdit_8 = new QLineEdit(page);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_8);

        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        lineEdit_9 = new QLineEdit(page);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_9);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(80, 30));
        pushButton->setMaximumSize(QSize(80, 30));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ico/14822068641558424397-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);

        formLayout->setWidget(10, QFormLayout::FieldRole, pushButton);


        gridLayout_4->addLayout(formLayout, 0, 0, 2, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lineEdit_4);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));
        pushButton_2->setIcon(icon6);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pushButton_2);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);


        gridLayout_4->addLayout(formLayout_2, 0, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_2->horizontalHeader()->setDefaultSectionSize(100);

        gridLayout_3->addWidget(tableView_2, 0, 0, 1, 3);

        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(80, 30));
        pushButton_5->setMaximumSize(QSize(80, 30));
        pushButton_5->setIcon(icon5);

        gridLayout_3->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(80, 30));
        pushButton_4->setMaximumSize(QSize(80, 30));
        pushButton_4->setIcon(icon4);

        gridLayout_3->addWidget(pushButton_4, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_2 = new QGridLayout(page_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(80, 30));
        label_13->setMaximumSize(QSize(80, 30));

        horizontalLayout->addWidget(label_13);

        spinBox = new QSpinBox(page_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimumSize(QSize(80, 30));
        spinBox->setMaximumSize(QSize(80, 30));
        spinBox->setMaximum(1100);
        spinBox->setValue(30);

        horizontalLayout->addWidget(spinBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        tableWidget = new QTableWidget(page_4);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 2);

        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(80, 30));
        pushButton_10->setMaximumSize(QSize(80, 30));
        pushButton_10->setIcon(icon5);

        gridLayout_2->addWidget(pushButton_10, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\320\222\320\270\320\267\321\213", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Widget", "\320\237\320\276\320\264\321\205\320\276\320\264\321\217\321\202 \320\272 \320\272\320\276\320\275\321\206\321\203", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Widget", "\320\222\320\265\321\201\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\320\230\320\274\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\262\320\270\320\267\321\213", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\320\241\321\200\320\276\320\272 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217 \320\262\320\270\320\267\321\213", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\320\227\320\260\320\263\321\200\320\260\320\275\320\277\320\260\321\201\320\277\320\276\321\200\321\202", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\320\241\320\265\321\200\320\270\321\217", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\264\320\260\321\207\320\270", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\320\224\320\260\321\202\320\260 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\320\260", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label_13->setText(QApplication::translate("Widget", "\320\224\320\275\320\265\320\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\320\230\320\274\321\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\320\224\320\275\320\265\320\271 \320\276\321\201\321\202\320\260\320\273\320\276\321\201\321\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\320\260\320\275\320\260", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\260\320\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
