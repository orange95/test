#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QDebug"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString fileName = QFileDialog::getOpenFileName(this,tr("123"),"C://",tr("Images (*.png *.xpm *.jpg)"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
