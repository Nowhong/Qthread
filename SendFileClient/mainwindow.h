#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void startConnect(QString,unsigned short);
    void sendFile(QString path);

private slots:
    void on_connectServer_clicked();

    void on_selFile_clicked();

    void on_sendFile_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
