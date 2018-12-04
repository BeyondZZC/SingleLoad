#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>

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
    QString Dir("G:\\QT5WorkSpace\\SingleLoad\\5a3d28d0c5759.jpg");
    QTime loadTime;
    loadTime.start();
    QPixmap pic1(Dir);
    ui->label->setPixmap(pic1);
    pic1.scaled(ui->label->size(), Qt::KeepAspectRatio);
    ui->label->setScaledContents(true);
    ui->label->show();
    int nTime = loadTime.elapsed();
    QString strTime = QString::number(nTime);
    ui->label_Time->setText(strTime);
}
