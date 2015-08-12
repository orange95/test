#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QDebug"
#include "QFileDialog"
#include "QTime"
#include "QTimer"
#include "QDateTime"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clock = new QTimer;
    clock ->setInterval(1000);
    connect(clock,SIGNAL(timeout()),this,SLOT(updateTime()));
    clock->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    QTime time;
    time = time.currentTime();
    qDebug() << time.toString("hh:mm:ss");
    QDateTime date;
    date = date.currentDateTime();
    qDebug() << date.toString("yyyy:MM:dd");
}
