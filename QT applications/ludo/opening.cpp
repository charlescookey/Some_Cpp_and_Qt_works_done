#include "opening.h"
#include "ui_opening.h"

Opening::Opening(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Opening)
{
    ui->setupUi(this);
}

Opening::~Opening()
{
    delete ui;
}

void Opening::on_pushButton_clicked()
{
    ww.settingActivePlayers(1);
    ww.show();
    close();
}

void Opening::on_pushButton_2_clicked()
{
    ww.settingActivePlayers(2);
    ww.show();
    close();
}

void Opening::on_pushButton_3_clicked()
{
    ww.settingActivePlayers(3);
    ww.show();
    close();
}

void Opening::on_pushButton_4_clicked()
{
    ww.settingActivePlayers(4);
    ww.show();
    close();
}
