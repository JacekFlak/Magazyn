#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QComboBox>
#include <string>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*float a = ui->lineEdit->text().toFloat();
    float pole = pow(a,2);
    ui->lineEdit_3->setText(QString::number(pole));*/
}

void MainWindow::on_pushButton_2_clicked()
{
    float a = ui->lineEdit_2->text().toFloat();
    float b = ui->lineEdit_4->text().toFloat();

    float wynik;
    int q=ui->operacja->currentIndex();
    switch(q)
    {
    case 0: wynik=a+b;break;
    case 1: wynik=a-b;break;
    case 2: wynik=a*b;break;
    case 3: wynik=a/b;break;
    }

ui->lineEdit_5->setText(QString::number(wynik));
}


void MainWindow::on_comboBox_activated(const QString &arg1)
{

}


void MainWindow::on_label_3_linkActivated(const QString &link)
{
    //ui->textLabel->setText(QString::number(ui->/*suwak oraz wartosc
}

void MainWindow::on_horizontalScrollBar_actionTriggered(int action)
{
    int pole=ui->horizontalScrollBar->value();
    pole=pole+4;
    ui->label_3->setText(QString::number(pole));
}

void MainWindow::on_textEdit_destroyed()
{

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->append(ui->lineEdit->text());
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_4_clicked()
{
    //int liczba=ui->lineEdit_3->value();
    //ui->listWidget->
    //float a = ui->lineEdit_3->text().toFloat();
    //ui->lineEdit_3->
    //ui->listWidget->addItem(ui->lineEdit_3);
    //ui->lineEdit_3->clear();
}
