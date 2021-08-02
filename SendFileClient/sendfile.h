#ifndef SENDFILE_H
#define SENDFILE_H

#include <QObject>
#include <QTcpSocket>

class SendFile : public QObject
{
    Q_OBJECT
public:
    explicit SendFile(QObject *parent = nullptr);
    void connectServer(QString ip,unsigned short port);
    void sendFile(QString path );

private:
    QTcpSocket *m_tcp;
signals:
    void connectOk();
    void gameOver();
    void sendPercent(int);

public slots:
};

#endif // SENDFILE_H
