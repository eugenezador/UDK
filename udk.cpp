#include "udk.h"
#include "ui_udk.h"

udk::udk(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::udk)
    , fight_window(new Fight(this))
    , expert_window(new Expert(this))
{
    ui->setupUi(this);
}

udk::~udk()
{
    delete fight_window;
    delete ui;
}


void udk::on_expert_mode_clicked()
{
    expert_window->show();
}


void udk::on_fight_mode_clicked()
{
    fight_window->show();
}

