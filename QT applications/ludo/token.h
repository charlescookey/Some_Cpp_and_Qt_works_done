#ifndef TOKEN_H
#define TOKEN_H
#include <QGraphicsEllipseItem>
#include <QBrush>
#include <QTimer>

#include "dicepath.h"
#include "Singleton.h"


class Token:public QObject , public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    Token();//QGraphicsItem *parent = NULL);

    void setConfigs(int,int, QColor,int);
    int getTotalNo();
    void mover(int);
    void backmover();
    int getPos();
    bool isMovable;
    bool reachEnd = false;

    int post;
    int poste;
    int counter;
    int i;
    int j;
    int bPost;
    void forAllTokens();
    void setOriginalPosition(QPoint);


signals:
    void tokenDoneMovement();
    void tokenBackDoneMovement();

public slots:
    void move();
    void moveback();

private:
    QPoint originalPosition;
    QBrush brush;
    int rad;
    int startConfig;
    int endConfig;
    int dice;
    int pos;
    int numberOnScreen;
    int diceCopy;
    QTimer *timer = new QTimer(this);
    QTimer *backtimer = new QTimer(this);
    dicePath dpath;

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
};
typedef Singleton<Token> Emmitter;

#endif // TOKEN_H
