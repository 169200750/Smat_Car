#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QMovie *backgroud=new QMovie("://1.gif");
    backgroud->setScaledSize(ui->label->size());
    ui->label->setMovie(backgroud);
    backgroud->start();
    this->setWindowTitle(tr("嵌入式智能小车%1").arg(tr("--4组--")));
    socket=new QTcpSocket;
    sockcar=new QTcpSocket;
    timer = new QTimer;
     //连接成功时，执行Mynetted函数
    connect(socket, SIGNAL(connected()), this, SLOT(Mynetted()));
    //从服务器读到内容时，执行ReaData函数
    connect(socket, SIGNAL(readyRead()), this, SLOT(ReadData()));
    //定时器溢出时，执行time_out函数
    connect(timer, SIGNAL(timeout()), this, SLOT(my_time_out()));
    sockcar->connectToHost("192.168.1.1",10004);
    if (sockcar->waitForConnected(1000))
       ui->label_1->setText("网络连接成功");
    else
        ui->label_1->setText("网络连接失败");

}


void Widget::on_pushButton_clicked()
{
    if(ui->pushButton->text()=="连接"){
        QString ip=ui->lineEdit_ip->text();
        quint16 port=ui->lineEdit_port->text().toInt();
        socket->connectToHost(ip,port);
    }else{
        this->close();
    }
}

void Widget::Mynetted()
{
    ui->pushButton->setText("断开");
    ui->lineEdit_net->setText("摄像头连接成功");
}


void Widget::ReadData()
{
   if(flag){
        //1.读大小
        if(socket->bytesAvailable() < 10){ //判断发送过来的大小是否为4字节
            return;
        }
        char len_buf[10]={0};
         int s_ret = socket->read(len_buf, 10);
         size=atoi(len_buf);
        //int s_ret = socket->read((char *)&size, 4);
        qDebug() << "s_ret = " << s_ret;
        flag = 0;
   }else{
        //2.读内容
        if(socket->bytesAvailable() < size){ //判断发送过来的大小是否为size个字节
            return;
        }
        int b_ret = socket->read(buf, size);
        qDebug() << "b_ret = " << b_ret;
        qDebug()<<size;
        //3.显示
        QPixmap pix;
        pix.loadFromData((uchar *)buf, size);

        ui->label_pic->setScaledContents(true);
        ui->label_pic->setPixmap(pix);
        flag = 1;
   }

}

void Widget::on_pushButton_star_clicked()
{



    if(ui->pushButton_star->text() == "重新监控")
    {
        char re_st[16] = "re_st";
        socket->write(re_st);

    }
    ui->pushButton_star->setText("正在监控");
    timer->start(50);

}

void Widget::my_time_out()
{
    char star[16] = "star";

    socket->write(star);
}

void Widget::on_pushButton_top_clicked()
{
    char stop[16] = "stop";
    timer->stop();
    ui->pushButton_star->setText("重新监控");
    socket->write(stop);
}

//小车方向控制
void Widget::on_go_pressed()
{
    qDebug() << "按下";
    QString data="1";
    ui->label_1->setText("前行");
    sockcar->write(data.toLatin1());
}

void Widget::on_buck_pressed()
{
    qDebug() << "按下";
    QString data="2";
    ui->label_1->setText("后退");
    sockcar->write(data.toLatin1());
}

void Widget::on_turn_left_pressed()
{
    qDebug() << "按下";
    QString data = "3";
    ui->label_1->setText("左转");
    sockcar->write(data.toLatin1());
}

void Widget::on_turn_right_pressed()
{
    qDebug() << "按下";
    QString data = "4";
    ui->label_1->setText("右转");
   sockcar->write(data.toLatin1());
}

void Widget::on_go_released()
{
    qDebug() << "释放";
    QString data = "0";
    sockcar->write(data.toLatin1());
}
void Widget::on_buck_released()
{
    qDebug() << "释放";
    QString data = "0";
    sockcar->write(data.toLatin1());
}

void Widget::on_turn_right_released()
{
    qDebug() << "释放";
    QString data = "0";
    sockcar->write(data.toLatin1());
}

void Widget::on_turn_left_released()
{
    qDebug() << "释放";
    QString data = "0";
    sockcar->write(data.toLatin1());
}


void Widget::keyPressEvent(QKeyEvent *k)
{
    switch (k->key()) {
    case Qt::Key_W:
        on_go_pressed();
        qDebug()<<k->key();
        break;
    case Qt::Key_A:
        on_turn_left_pressed();
        qDebug()<<k->key();
        break;
    case Qt::Key_S:
        on_buck_pressed();
        qDebug()<<k->key();
        break;
    case Qt::Key_D:
        on_turn_right_pressed();
        qDebug()<<k->key();
        break;
    }
}

void Widget::keyReleaseEvent(QKeyEvent *)
{
    on_go_released();
}



Widget::~Widget()
{
    delete ui;
}


