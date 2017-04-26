#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->connectButton, SIGNAL(clicked(bool)), this, SLOT(Connect()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Connect()
{

}
