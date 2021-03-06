#include "mythread.h"
#include<QElapsedTimer>
#include <QDebug>
#include<QThread>
//#include<debug.h>
Generate::Generate(QObject *parent) : QObject(parent)
{

}

void Generate::working(int m_num)
{
    qDebug()<<"生成随机数线程的地址:"<<QThread::currentThread();

    QVector<int> List;
    QElapsedTimer time;
    time.start();
    for(int i = 0;i < m_num;i++)
    {
        List.push_back(qrand() % 100000);

    }
    int millisec = time.elapsed();
   //qDebug()<<"总共花费了"<<millisec<<"毫秒生成了"<<m_num<<"个随机数";
    emit sendArray(List);
    emit spendTime(millisec);

}

BubbleSort::BubbleSort(QObject *parent):QObject(parent)
{
}

void BubbleSort::working(QVector<int> m_list)
{
    qDebug()<<"冒泡排序线程的地址:"<<QThread::currentThread();
    QElapsedTimer time;
    time.start();
    int temp;
    for(int i =0;i<m_list.size();i++)
    {
        for(int j=0;j<m_list.size()-i-1;j++)
        {
            if(m_list[j] > m_list[j+1])
            {
                temp = m_list[j];
                m_list[j] = m_list[j+1];
                m_list[j+1] = temp;
            }

        }
    }
    int millisec = time.elapsed();
    //qDebug()<<"冒泡排序总共花费了"<<millisec<<"毫秒";
    emit finish(m_list);
    emit spendTime(millisec);
}

QuickSort::QuickSort(QObject *parent): QObject(parent)
{

}

void QuickSort::quickSort(QVector<int> &s, int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        // 拿出第一个元素, 保存到x中,第一个位置成为一个坑
        int x = s[l];
        while (i < j)
        {
            // 从右向左找小于x的数
            while (i < j && s[j] >= x)
            {
                //左移, 直到遇到小于等于x的数
                j--;
            }
            if (i < j)
            {
                //将右侧找到的小于x的元素放入左侧坑中, 右侧出现一个坑
                //左侧元素索引后移
                s[i++] = s[j];
            }

            // 从左向右找大于等于x的数
            while (i < j && s[i] < x)
            {
                //右移, 直到遇到大于x的数
                i++;
            }
            if (i < j)
            {
                //将左侧找到的元素放入右侧坑中, 左侧出现一个坑
                //右侧元素索引向前移动
                s[j--] = s[i];
            }
        }
        //此时 i=j,将保存在x中的数填入坑中
        s[i] = x;
        quickSort(s, l, i - 1); // 递归调用
        quickSort(s, i + 1, r);
    }
}

void QuickSort::working(QVector<int> m_list)
{
    qDebug()<<"快速排序线程的地址:"<<QThread::currentThread();
    QElapsedTimer time;
    time.start();
    quickSort(m_list, 0, m_list.size()-1);
    int millisec = time.elapsed();
    //qDebug()<<"快速排序总共花费了"<<millisec<<"毫秒";
    emit finish(m_list);
    emit spendTime(millisec);
}
