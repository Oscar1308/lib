#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secscreen.h"
#include "topicsel.h"

//SecScreen *secs;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Start");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Start_clicked()
{
    hide();
    TopicSel Ts;
    Ts.setModal(true);
    Ts.exec();
}

