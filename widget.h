#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    QSqlQuery *query = new QSqlQuery;


private slots:
    void add_combo_country();
    void add_btn_on();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked();

    void on_lineEdit_textChanged();

    void on_lineEdit_2_textChanged();

    void on_lineEdit_3_textChanged();

    void on_lineEdit_5_textChanged();

    void on_lineEdit_6_textChanged();

    void on_lineEdit_7_textChanged();

    void on_lineEdit_10_textChanged();

    void on_lineEdit_8_textChanged();

    void on_lineEdit_9_textChanged();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_pushButton_9_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *model_rashod = new QSqlTableModel;
};

#endif // WIDGET_H
