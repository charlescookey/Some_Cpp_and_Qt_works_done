#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ludoboard.h"
#include "token.h"
#include "dicepath.h"
#include "dice.h"
#include "choice.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void settingActivePlayers(int);


public slots:
    void continueGame();
    void checkCondition();

private slots:
    void on_pushButton_clicked();
    void afterClick(int);
    void passed();
    void rolled(bool);

private:
    Ui::MainWindow *ui;
    QGraphicsScene * scene = new QGraphicsScene();
    Token *gameT[16];
    Choice choices;
    bool playerActive[4]={false};
    void activateMessageBoxes();
    QMessageBox notASix;
    QMessageBox reRoll;
    void eatPieceHere(int);
    bool eat = false;
    void checkIfEnd(int);
    int whichToMove(int);
    int human;
    dicePath dpath;
    void initializeAllTokens();

    dice dd;

    int llx;
    int lly;
    int llrad;
    int tokenToMove;

    ludoboard ll;
    void startGame();
    int playerTurn;
    QPoint zeroPlacement(int);
    QString a;

};
#endif // MAINWINDOW_H
