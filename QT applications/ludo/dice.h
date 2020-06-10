#ifndef DICE_H
#define DICE_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QRandomGenerator>
#include <QPainter>


using namespace std;


namespace Ui {
class dice;
}

class dice : public QMainWindow
{
    Q_OBJECT

public:
    explicit dice(QWidget *parent = nullptr);
    ~dice();
    int getRolledNumber();
    void rolldice(int,bool,int);


signals:
    void startDisplay(int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void timerStopage();

private:
    Ui::dice *ui;
    QBrush brush;

    int diceCount;
    int dx = 120;
    QPixmap *temp = new QPixmap(dx,dx);
    QPainter *painter = new QPainter(temp);
    QPixmap dicee[6] = {QPixmap(dx,dx)};
    int radd = dx/10;
    int rolledNumber;
    QGraphicsScene * scene = new QGraphicsScene();
    int numberCalling;
    int emitted;
    void buttonClickHappen(int);
    bool tempBool;
    int whichNum;
    void endRoll();
    QTimer *timer = new QTimer(this);
};

#endif // DICE_H
