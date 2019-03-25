#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "corvinlogger.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //CorvinLogger::getInstance().log("Test!");
    CorvinLogger::getInstance().logInfo("Test!");
}

MainWindow::~MainWindow()
{
    delete ui;
}
