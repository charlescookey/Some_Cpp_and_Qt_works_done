#ifndef OPENING_H
#define OPENING_H
#include "mainwindow.h"

namespace Ui {
class Opening;
}

class Opening : public QMainWindow
{
    Q_OBJECT

public:
    explicit Opening(QWidget *parent = nullptr);
    ~Opening();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Opening *ui;
    MainWindow ww;
};

#endif // OPENING_H
