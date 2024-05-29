#include "form.h"
#include "ui_form.h"
#include "hello.h"
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    if(ui->username->text()=="admin" && ui->password->text()=="1"){
        this->close();
        hello *h=hello;

    }
}
