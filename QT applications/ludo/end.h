#ifndef END_H
#define END_H

#include "opening.h"

#include <QDialog>
#include <QPainter>


namespace Ui {
class End;
}

class End : public QDialog
{
    Q_OBJECT

public:
    explicit End(QWidget *parent = nullptr);
    ~End();

private slots:
    void on_pushButton_clicked();

private:
    Ui::End *ui;
    QPixmap *temp = new QPixmap(500,500);
    QPainter *painter = new QPainter(temp);
    QPen pen;
    QFont myFont = QFont("Arial",30,QFont::Bold);
    Opening o;

};

#endif // END_H
