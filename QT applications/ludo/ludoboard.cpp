#include "ludoboard.h"

ludoboard::ludoboard()
{
    x = 601;
    y = 601;
    divisionsX = x/15;
    divisionsY = y/15;
    board = new QPixmap(x,y);
    painter = new QPainter(board);
}

void ludoboard::drawboard()
{
    dhx= divisionsX + (divisionsX/2) + 1;
    dhy= divisionsY + (divisionsY/2) + 1;
    painter->fillRect(0,0,x,y,Qt::white);
    painter->fillRect(divisionsX,divisionsY*6,divisionsX,divisionsY*2,Qt::red);
    painter->fillRect(divisionsX*2,divisionsY*7,divisionsX*4,divisionsY,Qt::red);
    painter->fillRect(divisionsX*7,divisionsY,divisionsX*2,divisionsY,Qt::green);
    painter->fillRect(divisionsX*7,divisionsY*2,divisionsX,divisionsY*4,Qt::green);
    painter->fillRect(divisionsX*6,divisionsY*13,divisionsX*2,divisionsY,Qt::blue);
    painter->fillRect(divisionsX*7,divisionsY*9,divisionsX,divisionsY*4,Qt::blue);
    painter->fillRect(divisionsX*13,divisionsY*7,divisionsX,divisionsY*2,Qt::yellow);
    painter->fillRect(divisionsX*9,divisionsY*7,divisionsX*4,divisionsY,Qt::yellow);

    for(int i=0; i <x ; i+=(x/15)){
        painter->drawLine(i,0,i,y);
    }
    for(int i=0;i <y;i+=(y/15)){
        painter->drawLine(0,i,x,i);
    }

    painter->fillRect( 1 , 1 , x/2 - dhx, y/2 - dhy,Qt::red);
    painter->fillRect(x/2 + dhx , 1,x/2 - dhx , y/2 - dhy,Qt::green);
    painter->fillRect(1,y/2 + dhy,x/2 -dhx ,y/2 -dhy,Qt::blue);
    painter->fillRect( x/2 + dhx, y/2 + dhx,x/2 - dhx,y/2 -dhx,Qt::yellow);

    painter->fillRect(divisionsX,divisionsY,divisionsX*4,divisionsY*4,Qt::white);
    painter->drawRect(divisionsX,divisionsY,divisionsX*4,divisionsY*4);
    painter->fillRect(divisionsX,divisionsY*10,divisionsX*4,divisionsY*4,Qt::white);
    painter->drawRect(divisionsX,divisionsY*10,divisionsX*4,divisionsY*4);
    painter->fillRect(divisionsX*10,divisionsY,divisionsX*4,divisionsY*4,Qt::white);
    painter->drawRect(divisionsX*10,divisionsY,divisionsX*4,divisionsY*4);
    painter->fillRect(divisionsX*10,divisionsY*10,divisionsX*4,divisionsY*4,Qt::white);
    painter->drawRect(divisionsX*10,divisionsY*10,divisionsX*4,divisionsY*4);
    brush.setColor(Qt::red);
    brush.setStyle(Qt::SolidPattern);
    painter->setBrush(brush);
    QPolygon a;
    a<<QPoint(divisionsX*6,divisionsY*6)<<QPoint(x/2,x/2)<<QPoint(divisionsX*6,divisionsY*9);
    painter->drawPolygon(a);
    a.clear();
    brush.setColor(Qt::blue);
    painter->setBrush(brush);
    a<<QPoint(divisionsX*6,divisionsY*9)<<QPoint(x/2,y/2)<<QPoint(divisionsX*9,divisionsY*9);
    painter->drawPolygon(a);
    a.clear();
    brush.setColor(Qt::green);
    painter->setBrush(brush);
    a<<QPoint(divisionsX*6,divisionsY*6)<<QPoint(x/2,y/2)<<QPoint(divisionsX*9,divisionsY*6);
    painter->drawPolygon(a);
    a.clear();
    brush.setColor(Qt::yellow);
    painter->setBrush(brush);
    a<<QPoint(divisionsX*9,divisionsY*6)<<QPoint(x/2,y/2)<<QPoint(divisionsX*9,divisionsY*9);
    painter->drawPolygon(a);
}

int ludoboard::getX()
{
    return x;
}
