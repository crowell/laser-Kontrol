#include <stdlib.h>
#include <fcntl.h>
#include <linux/kd.h>#include <stdlib.h>
#include <fcntl.h>
#include <linux/kd.h>
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

void MainWindow::on_pushButton_clicked()
{
    system("./drawbot.sh");
    ui->pushButton->setDisabled(true);
    ui->checkBox->setDisabled(true);

}
void MainWindow::on_checkBox_toggled(bool checked)
{
    ui->pushButton->setEnabled(true);
}
