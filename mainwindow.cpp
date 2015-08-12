#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str = "hello";
    qDebug() << str;
    str.prepend("123");
   qDebug() << str;
   str.append("456");
    qDebug() << str;

    QString str2 = "yes ";
    QString str3 = str+str2;
    qDebug() << str3;

}

MainWindow::~MainWindow()
{
    delete ui;
}
