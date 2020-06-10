#include "token.h"
#include <QPainter>

Token::Token()
{
    rad = 601;
    rad/=15;
    rad*=0.80;
    pos = 0;
    setRect(0,0,rad,rad);
    isMovable = false;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::red);
}

void Token::setConfigs(int a, int b, QColor c,int d)
{
    numberOnScreen = d;
    startConfig =a;
    endConfig =b;
    brush.setColor(c);
    setBrush(brush);
}

int Token::getTotalNo()
{
    if(pos > 50)
        return -1;
    return (startConfig + pos)%52;
}

void Token::mover(int x)
{
    dice = x;
    timer = new QTimer(this);
    post = (pos + startConfig);
    poste = (pos + endConfig)-50;
    counter = 0;
    diceCopy = dice;
    i = 0;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(300);
}

void Token::backmover()
{
    bPost = (pos + startConfig)-1;
    backtimer = new QTimer(this);
    connect(backtimer,SIGNAL(timeout()),this,SLOT(moveback()));
    backtimer->start(200);

}

int Token::getPos()
{
    return pos;
}

void Token::forAllTokens()
{
    Emmitter::Instance()->tokenBackDoneMovement();
}

void Token::setOriginalPosition(QPoint f)
{
    originalPosition = f;
    setPos(f);
}

void Token::move()
{
    if(pos > 49){
        if(diceCopy <= 56 - pos){
            setPos(dpath.epath[poste]);
            counter=1;
            diceCopy--;
        }else{
            timer->stop();
            i=0;
            Emmitter::Instance()->tokenDoneMovement();
            return;
        }
    }else{
        setPos(dpath.path[post%52]);
        post++;
        counter=1;
        diceCopy--;
    }
    pos+=counter;
    if(pos ==56)reachEnd=true;
    counter=0;
    poste = (pos + endConfig)-50;
    i++;
    if(i >= dice){
       timer->stop();
       i=0;
       Emmitter::Instance()->tokenDoneMovement();
    }
}

void Token::moveback()
{
    if(bPost >= startConfig -1){
        setPos(dpath.path[bPost%52]);
        bPost--;
    }else{
        setPos(originalPosition);
        backtimer->stop();
        pos =0;
        isMovable = false;
        Emmitter::Instance()->tokenBackDoneMovement();
    }
}

void Token::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(brush);
    painter->drawEllipse(0,0,rad,rad);
    painter->drawText(rad/2 - 2 ,rad/2  + 4,QString::number(numberOnScreen));
}
