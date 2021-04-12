#include "widget.h"
#include "ui_widget.h"
#include <QtSql>
#include <QDate>
#include <QDebug>
#include <QMessageBox>
#include <QRegExp>
#include <QTableWidgetItem>

QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");//драйвер sqlite
QSqlTableModel *model_count = new QSqlTableModel;//модель для стран
QSqlTableModel *model_cursant = new QSqlTableModel;//модель для курсантов

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

     db.setDatabaseName("base");
     if (!db.open()){
         qDebug() << "Нет соединения с БД";
     }
     query->exec("CREATE TABLE country (count VARCHAR PRIMARY KEY NOT NULL);");//таблица для стран
     query->exec("CREATE TABLE cursant ("//таблица для курсантов
                 "id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,"
                 "fam VARCHAR NOT NULL,"
                 "name VARCHAR NOT NULL,"
                 "sname VARCHAR NOT NULL,"
                 "country VARCHAR,"
                 "visadata VARCHAR,"
                 "dateoffvisa VARCHAR NOT NULL,"
                 "serial VARCHAR NOT NULL,"
                 "number VARCHAR NOT NULL,"
                 "passdateon VARCHAR NOT NULL,"
                 "passdateoff VARCHAR NOT NULL)");

     model_count->setTable("country");
     ui->tableView->setModel(model_count);
     model_count->setHeaderData(0, Qt::Horizontal, "Страна");
     ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
     model_count->select();
     add_combo_country();

     model_cursant->setTable("cursant");
     ui->tableView_2->setModel(model_cursant);
     ui->tableView_2->hideColumn(0);
     model_cursant->setHeaderData(1, Qt::Horizontal, "Фамилия");
     model_cursant->setHeaderData(2, Qt::Horizontal, "Имя");
     model_cursant->setHeaderData(3, Qt::Horizontal, "Отчество");
     model_cursant->setHeaderData(4, Qt::Horizontal, "Страна");
     model_cursant->setHeaderData(5, Qt::Horizontal, "Данные визы");
     model_cursant->setHeaderData(6, Qt::Horizontal, "Окончание визы");
     model_cursant->setHeaderData(7, Qt::Horizontal, "Серия паспорта");
     model_cursant->setHeaderData(8, Qt::Horizontal, "Номер паспорта");
     model_cursant->setHeaderData(9, Qt::Horizontal, "Дата выдачи");
     model_cursant->setHeaderData(10, Qt::Horizontal, "Действителен до");
     model_cursant->select();
     ui->tableView_2->setSortingEnabled(1);

     ui->pushButton_3->setEnabled(0);
     ui->pushButton->setEnabled(0);
     ui->pushButton_4->setEnabled(0);
     ui->pushButton_2->setEnabled(0);

     QRegExp R_date("(0[1-9]|[12][0-9]|3[01]).(0[1-9]|[1][0-2]).(19[0-9][0-9]|20[0-9][0-9])");
     QRegExpValidator *valida = new QRegExpValidator(R_date, this);
     ui->lineEdit_6->setValidator(valida);
     ui->lineEdit_6->setPlaceholderText("Пример: 21.05.2019");
     ui->lineEdit_8->setValidator(valida);
     ui->lineEdit_8->setPlaceholderText("Пример: 21.05.2019");
     ui->lineEdit_9->setValidator(valida);
     ui->lineEdit_9->setPlaceholderText("Пример: 21.05.2019");

     add_on_tableview();

}



void Widget::add_combo_country()
{
    ui->comboBox->clear();
   query->exec("SELECT count from country");
   query->first();
    do {
        ui->comboBox->addItem(query->value(0).toString());
    } while (query->next());
   ui->comboBox->setCurrentIndex(0);
}

void Widget::add_btn_on()
{
    if(ui->lineEdit->text()!="" &&
       ui->lineEdit_2->text()!="" &&
       ui->lineEdit_3->text()!="" &&
       ui->lineEdit_5->text()!="" &&
       ui->lineEdit_6->text()!="" &&
       ui->lineEdit_7->text()!="" &&
       ui->lineEdit_8->text()!="" &&
       ui->lineEdit_9->text()!="" &&
       ui->lineEdit_10->text()!=""){
        ui->pushButton->setEnabled(1);
    } else {
        ui->pushButton->setEnabled(0);
    }
}

void Widget::add_on_tableview()
{
    ui->tableWidget->setRowCount(0);
    int stroki = ui->tableView_2->model()->rowCount();
    QDate cd = QDate::currentDate();
    int spin = ui->spinBox->value();
    for (int i = 0; i < stroki; i++){
        QDate date_str = QDate::fromString(ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, 6)).toString(), "dd.MM.yyyy");
        int dayz = cd.daysTo(date_str);
        if(dayz <= spin){
            ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, 1)).toString()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 1, new QTableWidgetItem(ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, 2)).toString()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 2, new QTableWidgetItem(ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, 3)).toString()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 3, new QTableWidgetItem(QString::number(dayz)));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1, 4, new QTableWidgetItem(ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, 4)).toString()));
        }
    }
    ui->tableWidget->sortByColumn(3);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
    if(ui->lineEdit_4->text()!=""){
        query->prepare("INSERT INTO country (count)"
                "VALUES ( :count)");
        query->bindValue(":count", ui->lineEdit_4->text());
        if(!query->exec()){
         QMessageBox msb;
         msb.setButtonText(0, "OK");
         msb.warning(this, "Ошибка", "Данная страна уже добавлена");
        } else {
            model_count->select();
            ui->lineEdit_4->clear();
            add_combo_country();
    }
}
}

void Widget::on_pushButton_3_clicked()
{
    ui->tableView->model()->removeRow(ui->tableView->currentIndex().row());
    ui->pushButton_3->setEnabled(0);
    model_count->submitAll();
    model_count->select();
    add_combo_country();
}

void Widget::on_tableView_clicked()
{
    ui->pushButton_3->setEnabled(1);
}

void Widget::on_lineEdit_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_2_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_3_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_5_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_6_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_7_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_10_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_8_textChanged()
{
    add_btn_on();
}

void Widget::on_lineEdit_9_textChanged()
{
    add_btn_on();
}

void Widget::on_pushButton_clicked()
{
    query->prepare("INSERT INTO cursant (fam, name, sname, country, visadata, dateoffvisa, serial, number, passdateon, passdateoff)"
            "VALUES ( :fam, :name, :sname, :country, :visadata, :dateoffvisa, :serial, :number, :passdateon, :passdateoff)");
    query->bindValue(":fam", ui->lineEdit->text());
    query->bindValue(":name", ui->lineEdit_2->text());
    query->bindValue(":sname", ui->lineEdit_3->text());
    query->bindValue(":country", ui->comboBox->currentText());
    query->bindValue(":visadata", ui->lineEdit_5->text());
    query->bindValue(":dateoffvisa", ui->lineEdit_6->text());
    query->bindValue(":serial", ui->lineEdit_7->text());
    query->bindValue(":number", ui->lineEdit_10->text());
    query->bindValue(":passdateon", ui->lineEdit_8->text());
    query->bindValue(":passdateoff", ui->lineEdit_9->text());

    if(!query->exec()){
     QMessageBox msb;
     msb.setButtonText(0, "OK");
     msb.warning(this, "Ошибка", "Ошибка ввода");
    }
    model_cursant->select();

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->comboBox->setCurrentIndex(0);
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
}

void Widget::on_pushButton_4_clicked()
{
    ui->tableView_2->model()->removeRow(ui->tableView_2->currentIndex().row());
    ui->pushButton_4->setEnabled(0);
    model_cursant->submitAll();
    model_cursant->select();
    add_on_tableview();
}

void Widget::on_tableView_2_clicked()
{
    ui->pushButton_4->setEnabled(1);
}

void Widget::on_pushButton_5_clicked()
{
    model_cursant->submitAll();
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::on_lineEdit_4_textChanged(const QString &arg1)
{
    if (arg1 != ""){
        ui->pushButton_2->setEnabled(1);
    } else {
        ui->pushButton_2->setEnabled(0);
    }
}

void Widget::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Widget::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_spinBox_valueChanged()
{
    add_on_tableview();
}
