#include "recvfile.h"
#include<QFile>


RecvFile::RecvFile(QTcpSocket *tcp, QObject *parent)
{
    m_tcp = tcp;

}

void RecvFile::run()
{
    QFile *file = new QFile("recv.txt");
    file->open(QFile::WriteOnly);
    connect(m_tcp,&QTcpSocket::readyRead,this,[=]()
    {
        static int count = 0;
        static int total = 0;
        if(count == 0)
        {
            m_tcp->read((char*)&total,4);
        }
        QByteArray all = m_tcp->readAll();
        count +=all.size();
        file->write(all);
        if(count == total)
        {
            m_tcp->close();
            m_tcp->deleteLater();
            file->close();
            file->deleteLater();
            emit over();
        }

    });
    //进入时间循环
    exec();
}
