#include "dice.h"
#include "ui_dice.h"

#include <QThread>


dice::dice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dice)
{
    ui->setupUi(this);

    brush.setColor(Qt::red);
    brush.setStyle(Qt::SolidPattern);

    painter->setBrush(brush);

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx -10,dx -10,Qt::white);
    painter->drawEllipse(QPoint(dx/2,dx/2),radd,radd);

    dicee[0] = *temp;

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx -10,dx -10,Qt::white);
    painter->drawEllipse(QPoint(dx*3/4 , dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx*3/4),radd,radd);

    dicee[1] = *temp;

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx-10,dx-10,Qt::white);
    painter->drawEllipse(QPoint(dx*3/4 , dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx/2 , dx/2),radd,radd);

    dicee[2] = *temp;

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx -10,dx -10,Qt::white);
    painter->drawEllipse(QPoint(dx/4,dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx*3/4),radd,radd);

    dicee[3] = *temp;

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx -10,dx -10,Qt::white);
    painter->drawEllipse(QPoint(dx/4,dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx/2 , dx/2),radd,radd);

    dicee[4] = *temp;

    painter->drawRect(0,0,dx,dx);
    painter->fillRect(5,5,dx -10,dx -10,Qt::white);
    painter->drawEllipse(QPoint(dx/4,dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx*3/4),radd,radd);
    painter->drawEllipse(QPoint(dx/4 , dx/2),radd,radd);
    painter->drawEllipse(QPoint(dx*3/4 , dx/2),radd,radd);

    dicee[5] = *temp;

    diceCount= 0;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerStopage()));
    ui->graphicsView->setScene(scene);
}

dice::~dice()
{
    delete ui;
}

int dice::getRolledNumber()
{
    return rolledNumber;
}

void dice::rolldice(int x,bool y,int z)
{
    whichNum =z;
    tempBool = y;
    numberCalling = x;
    rolledNumber = (QRandomGenerator::global()->generate())%6 + 1;
    timer->start(40);
}

void dice::endRoll()
{
    int l;
    scene->addPixmap(dicee[rolledNumber-1]);
    if(whichNum > 100){
       l = whichNum /100;
       if(rolledNumber >56-l ){
           whichNum = (whichNum%100 ) +1;
       }
       else{
           whichNum = whichNum %100;
       }
    }

    if(rolledNumber ==6 && whichNum>3){
        whichNum -= 3;
    }else if(whichNum >3){
        whichNum -= 4;
    }
    if(whichNum ==0 && !tempBool){
        QTimer::singleShot(1000,this,[=](){ui->pushButton->animateClick(300);});
    }else if(whichNum ==1 && !tempBool){
        QTimer::singleShot(1000,this,[=](){ui->pushButton_2->animateClick(300);});
    }else if(whichNum ==2 && !tempBool){
        QTimer::singleShot(1000,this,[=](){ui->pushButton_3->animateClick(300);});
    }else if(whichNum ==3 && !tempBool){
        QTimer::singleShot(1000,this,[=](){ui->pushButton_4->animateClick(300);});
    }
}

void dice::timerStopage()
{
    scene->addPixmap(dicee[diceCount%6]);
    diceCount++;
    if(diceCount>30){
        timer->stop();
        endRoll();
        diceCount=0;
    }
}

void dice::on_pushButton_clicked()
{
    buttonClickHappen(0);
}

void dice::on_pushButton_2_clicked()
{
    buttonClickHappen(1);
}

void dice::on_pushButton_3_clicked()
{
    buttonClickHappen(2);
}

void dice::on_pushButton_4_clicked()
{
    buttonClickHappen(3);
}

void dice::buttonClickHappen(int x)
{
    emitted =  ((numberCalling -1) * 4) + x;
    close();
    emit startDisplay(emitted);
}
