#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//包含对应的头文件
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QKeyEvent>
#include <QMovie>
#include <QPixmap>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
//  对应的四个按钮的按下和释放的槽函数
    void on_go_pressed();
    void on_go_released();
    void on_buck_pressed();
    void on_buck_released();
    void on_turn_left_pressed();
    void on_turn_left_released();
    void on_turn_right_pressed();
    void on_turn_right_released();
//  键盘控制
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
//  摄像头部分
    void ReadData();
    void on_pushButton_star_clicked();
    void my_time_out(); //定时
    void on_pushButton_top_clicked();
//  连接部分
    void on_pushButton_clicked();
    void Mynetted(); 
private:
    Ui::Widget *ui;
    QTcpSocket *socket;
    QTcpSocket *sockcar;
    int  size;
    char buf[1024*1024];
    int flag =1;
    QTimer * timer;
};
#endif // WIDGET_H
