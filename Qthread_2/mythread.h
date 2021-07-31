#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include<QVector>

class Generate : public QObject
{
    Q_OBJECT
public:
    explicit Generate(QObject *parent = nullptr);
    void working(int num);

signals:
   void sendArray(QVector<int> list);
   void spendTime(int);

public slots:

};

class BubbleSort : public QObject
{
    Q_OBJECT
public:
    explicit BubbleSort(QObject *parent = nullptr);
    void working(QVector<int>list);

signals:
   void finish(QVector<int> num);
   void spendTime(int);

public slots:

};

class QuickSort : public QObject
{
    Q_OBJECT
public:
    explicit QuickSort(QObject *parent = nullptr);
    void working(QVector<int>list);
private:
    void quickSort(QVector<int> &list,int s,int e);


signals:
   void finish(QVector<int> num);
   void spendTime(int);

public slots:

};

#endif // MYTHREAD_H
