#include "expert.h"
#include "ui_expert.h"

Expert::Expert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Expert)
{
    ui->setupUi(this);
}

Expert::~Expert()
{
    delete ui;
}
