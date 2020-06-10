#include "end.h"
#include "ui_end.h"

End::End(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::End)
{
    ui->setupUi(this);

    ui->label->setFixedSize(500,500);


    painter->fillRect(0,0,500,160,Qt::darkGreen);
    painter->fillRect(0,160,500,320,Qt::darkRed);
    painter->fillRect(0,320,500,480,Qt::darkBlue);
    painter->fillRect(0,480,500,500,Qt::cyan);
    pen.setCapStyle(Qt::RoundCap);
    pen.setColor(Qt::white);
    painter->setPen(pen);
    painter->setFont(myFont);
    painter->drawText(QPoint(200,85),"LUDO");
    painter->drawText(QPoint(185,245),"BOARD");
    painter->drawText(QPoint(200,405),"GAME");
    myFont.setPixelSize(11);
    myFont.setFamily("verdana");
    pen.setColor(Qt::black);
    painter->setFont(myFont);
    painter->setPen(pen);
    painter->drawText(QPoint(306,497),"charlesiroegbu99@gmail.com");

    ui->label->setPixmap(*temp);
}

End::~End()
{
    delete ui;
}

void End::on_pushButton_clicked()
{

    close();
    o.show();
}

