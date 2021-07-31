#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<mythread.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("线程_排序比较");
    Generate *gen = new Generate;
    QuickSort *quick = new QuickSort;
    BubbleSort *bubble = new BubbleSort;
    connect(this,&MainWindow::starting,gen,&Generate::recvNum);

    connect(ui->start,&QPushButton::clicked,this,[=]()
    {
        gen->start();
        emit starting(10000);
    });
    connect(gen,&Generate::sendArray,bubble,&BubbleSort::recvArray);
    connect(gen,&Generate::sendArray,quick,&QuickSort::recvArray);
    connect(gen,&Generate::sendArray,this,[=](QVector<int>list)
    {
        bubble->start();
        quick->start();
        for(int i = 0;i<list.size();i++)
        {
            //ui->randList->addItem(QString::number(list.at(i)));
            ui->randList->addItem(QString::number(list.at(i)));
        }



    });
    connect(gen,&Generate::spendTime,this,[=](int time)
    {
          ui->showSome->append("生成这些随机数花费了"+QString::number(time)+"毫秒");
    });
    connect(bubble,&BubbleSort::spendTime,this,[=](int time)
    {
          ui->showSome->append("冒泡排序花费了"+QString::number(time)+"毫秒");
    });
    connect(quick,&QuickSort::spendTime,this,[=](int time)
    {
          ui->showSome->append("快速排序花费了"+QString::number(time)+"毫秒");
    });
    connect(bubble,&BubbleSort::finish,this,[=](QVector<int> list)
    {
       for(int i=0;i<list.size();i++)
       {
           ui->bubbleList->addItem(QString::number(list.at(i)));
       }
    });
    connect(quick,&QuickSort::finish,this,[=](QVector<int> list)
    {
       for(int i=0;i<list.size();i++)
       {
           ui->quickList->addItem(QString::number(list.at(i)));
       }
    });
    connect(this, &MainWindow::destroy, this, [=]()
    {

        gen->quit();
        gen->wait();
        gen->deleteLater();  // delete t1;

        bubble->quit();
        bubble->wait();
        bubble->deleteLater();

        quick->quit();
        quick->wait();
        quick->deleteLater();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
