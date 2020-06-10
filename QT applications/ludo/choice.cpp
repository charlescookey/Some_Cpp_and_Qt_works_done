#include "choice.h"
#include "ui_choice.h"

#include <QTimer>
Choice::Choice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Choice)
{
    ui->setupUi(this);
}

Choice::~Choice()
{
    delete ui;
}

void Choice::setDialog(int x, bool y)
{
    human = y;
    if(human){
        ui->label->setText("Player " + whatColor(x));
    }else{
        ui->label->setText("(Computer) Player " + whatColor(x));
        QTimer::singleShot(1000,this,[=](){ui->pushButton->animateClick(300);});

    }
}

void Choice::on_pushButton_clicked()
{
    emit roll(human);
    close();
}

void Choice::on_pushButton_2_clicked()
{
    close();
    emit pass();
}

QString Choice::whatColor(int z)
{
    if(z ==0){
        return "Red";
    }else if(z == 1){
        return "Green";
    }else if(z ==2){
        return "Yellow";
    }else{
        return "Blue";
    }
}
