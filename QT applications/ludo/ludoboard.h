#ifndef LUDOBOARD_H
#define LUDOBOARD_H


#include <QPainter>
#include <QPixmap>
#include <QBrush>


using namespace std;

class ludoboard
{
public:
    ludoboard();
    void drawboard();
    int getX();
    QPixmap *board;

private:
    int dhx;
    int dhy;
    int x ;
    int y ;
    int divisionsX ;
    int divisionsY ;

    QPainter *painter;
    QBrush brush;
};

#endif // LUDOBOARD_H
