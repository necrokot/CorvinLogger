#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "logmacros.h"

// debug
// #define T_LOG(msg) CorvinLogger::getInstance().logInfo(QString(msg).append(__FILE__).append(" ").append(__LINE__));

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //  T_LOG("123")
    CorvinLogger::getInstance();
    CL_INFO("123");
}

MainWindow::~MainWindow()
{
    delete ui;
}
