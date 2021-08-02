#include "sendfile.h"

#include <QHostAddress>
#include<QFile>
#include<QFileInfo>
#include<QThread>
SendFile::SendFile(QObject *parent) : QObject(parent)
{

}

void SendFile::sendFile(QString path)
{
    QFile file(path);
    file.open(QFile::ReadOnly);
    QFileInfo info(path);
    int fileSize = info.size();
    while (!file.atEnd())
    {
        static int num = 0;
        if(num == 0)
        {
            m_tcp->write((char*)&fileSize,4);
        }
        QByteArray line = file.readLine();
        num+=line.size();
        m_tcp->write(line);
        int percent = (num * 100 / fileSize);
        emit sendPercent(percent);
    }
}

void SendFile::connectServer(QString ip, unsigned short port)
{
    m_tcp = new QTcpSocket;
    m_tcp->connectToHost(QHostAddress(ip),port);
    connect(m_tcp,&QTcpSocket::connected,this,&SendFile::connectOk);
    connect(m_tcp,&QTcpSocket::disconnected,this,[=]()
    {
       emit gameOver();
       m_tcp->close();
       m_tcp->deleteLater();


    });
}
