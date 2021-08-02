#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sendfile.h>
#include <QThread>
#include <QMessageBox>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ip->setText("127.0.0.1");
    ui->port->setText("9999");
    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);
    QThread *t = new QThread;
    SendFile *worker = new SendFile;
    worker->moveToThread(t);
    connect(this,&MainWindow::startConnect,worker,&SendFile::connectServer);
    t->start();
    connect(worker,&SendFile::connectOk,this,[=]()
    {
        QMessageBox::information(this,"连接服务器","恭喜，成功连接上服务器！");
    });
    connect(worker,&SendFile::gameOver,this,[=]()
    {
        t->quit();
        t->wait();
        worker->deleteLater();
        t->deleteLater();
    });
    connect(this,&MainWindow::sendFile,worker,&SendFile::sendFile);
    connect(worker,&SendFile::sendPercent,ui->progressBar,&QProgressBar::setValue);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connectServer_clicked()
{
    QString ip = ui->ip->text();
    unsigned short port = ui->port->text().toUShort();
    emit startConnect(ip,port);

}

void MainWindow::on_selFile_clicked()
{
    QString path = QFileDialog::getOpenFileName();
    if(path.isEmpty())
    {
        QMessageBox::warning(this,"打开文件","选择的文件路径不能为空！");
        return ;

    }
    ui->filePath->setText(path);
}

void MainWindow::on_sendFile_clicked()
{
    emit sendFile(ui->filePath->text());
}
