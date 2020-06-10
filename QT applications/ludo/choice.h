#ifndef CHOICE_H
#define CHOICE_H

#include <QDialog>

namespace Ui {
class Choice;
}

class Choice : public QDialog
{
    Q_OBJECT

public:
    explicit Choice(QWidget *parent = nullptr);
    ~Choice();
    void setDialog(int,bool);

signals:
    void roll(bool);
    void pass();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Choice *ui;
    bool human;
    QString whatColor(int);
};

#endif // CHOICE_H
