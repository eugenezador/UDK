#include "fight.h"
#include "ui_fight.h"

Fight::Fight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fight)
{
    ui->setupUi(this);
}

Fight::~Fight()
{
    delete ui;
}
