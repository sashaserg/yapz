#include "mainwindow.h"
#include "ui_mainwindow.h"

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
//количество строк кода
void MainWinduw::on_SLOC_cllcked()
{
    QString str= ui->plainTextEdit->toPlainText();
    int n = str.count( "\nM);
    ui->label->setText(QString::number(n-l));

}
