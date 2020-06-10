#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ll.drawboard();
    llx = ll.getX()/15;
    lly = ll.getX()/15;
    llrad = llx*0.4;
    scene->addPixmap(*ll.board);
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,631,631);
    initializeAllTokens();
    connect(&dd,SIGNAL(startDisplay(int)),this,SLOT(afterClick(int)));
    connect(Emmitter::Instance(),SIGNAL(tokenDoneMovement()),this,SLOT(checkCondition()));
    connect(Emmitter::Instance(),SIGNAL(tokenBackDoneMovement()),this,SLOT(continueGame()));
    connect(&choices,SIGNAL(pass()),this,SLOT(passed()));
    connect(&choices,SIGNAL(roll(bool)),this,SLOT(rolled(bool)));
    playerTurn=0;
    dd.setWindowModality(Qt::ApplicationModal);
    choices.setWindowModality(Qt::ApplicationModal);
    activateMessageBoxes();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeAllTokens()
{
    for(int i =0;i<16;i++){gameT[i] = new Token();};

    for(int i =0;i<4;i++){gameT[i]->setConfigs(2,0,Qt::red,i+1);};
    for(int i =4;i<8;i++){gameT[i]->setConfigs(15,6,Qt::green,i-3);};
    for(int i =8;i<12;i++){gameT[i]->setConfigs(28,12,Qt::yellow,i-7);};
    for(int i =12;i<16;i++){gameT[i]->setConfigs(41,18,Qt::blue,i-11);};

    gameT[0]->setOriginalPosition(QPoint(llx+(llx-llrad),lly+(lly-llrad)));
    gameT[1]->setOriginalPosition(QPoint(llx+((llx*3)-llrad),lly+(lly-llrad)));
    gameT[2]->setOriginalPosition(QPoint(llx+(llx-llrad),lly+((lly*3)-llrad)));
    gameT[3]->setOriginalPosition(QPoint(llx+((llx*3)-llrad),lly+((lly*3)-llrad)));

    gameT[4]->setOriginalPosition(QPoint((llx*10)+(llx-llrad),lly+(lly-llrad)));
    gameT[5]->setOriginalPosition(QPoint((llx*10)+((llx*3)-llrad),lly+(lly-llrad)));
    gameT[6]->setOriginalPosition(QPoint((llx*10)+(llx-llrad),lly+((lly*3)-llrad)));
    gameT[7]->setOriginalPosition(QPoint((llx*10)+((llx*3)-llrad),lly+((lly*3)-llrad)));

    gameT[8]->setOriginalPosition(QPoint((llx*10)+(llx-llrad),(lly*10)+(lly-llrad)));
    gameT[9]->setOriginalPosition(QPoint((llx*10)+((llx*3)-llrad),(lly*10)+(lly-llrad)));
    gameT[10]->setOriginalPosition(QPoint((llx*10)+(llx-llrad),(lly*10)+((lly*3)-llrad)));
    gameT[11]->setOriginalPosition(QPoint((llx*10)+((llx*3)-llrad),(lly*10)+((lly*3)-llrad)));

    gameT[12]->setOriginalPosition(QPoint(llx+(llx-llrad),(lly*10)+(lly-llrad)));
    gameT[13]->setOriginalPosition(QPoint(llx+((llx*3)-llrad),(lly*10)+(lly-llrad)));
    gameT[14]->setOriginalPosition(QPoint(llx+(llx-llrad),(lly*10)+((lly*3)-llrad)));
    gameT[15]->setOriginalPosition(QPoint(llx+((llx*3)-llrad),(lly*10)+((lly*3)-llrad)));

    for(int i =0;i<16;i++){scene->addItem(gameT[i]);};
}

void MainWindow::startGame()
{
    choices.show();
    choices.setDialog(playerTurn%4,playerActive[playerTurn%4]);
}

QPoint MainWindow::zeroPlacement(int f)
{
    if(f>11){return dpath.path[40];
    }else if(f>7){return dpath.path[27];
    }else if(f>3){return dpath.path[14];
    }else{return dpath.path[1];
    }
}

void MainWindow::continueGame()
{
    checkIfEnd(playerTurn%4);
        if(dd.getRolledNumber() == 6){
            if(playerActive[playerTurn%4]){
                QString reRollText = "Player " + QString::number((playerTurn % 4)+1);
                reRoll.setText(reRollText);
                if(reRoll.exec() == QMessageBox::Yes){
                    dd.show();
                    dd.rolldice((playerTurn % 4)+1 ,playerActive[playerTurn%4],-1);
                }
            }else{
                dd.show();
                dd.rolldice((playerTurn % 4)+1 ,playerActive[playerTurn%4],whichToMove(playerTurn%4));
            }
        }else{
            playerTurn++;
            startGame();
        }
}
void MainWindow::checkCondition()
{
    eatPieceHere(tokenToMove);
}

void MainWindow::on_pushButton_clicked()
{
    startGame();
}

void MainWindow::afterClick(int x)
{
    tokenToMove = x;
    if(gameT[x]->isMovable){
    gameT[x]->mover(dd.getRolledNumber());
    }else if(!gameT[x]->isMovable  && dd.getRolledNumber() == 6){
        gameT[x]->isMovable = true;
        gameT[x]->setPos(zeroPlacement(x));
        eatPieceHere(tokenToMove);
    }else{
        if(playerActive[playerTurn%4]){
            if(notASix.exec() == QMessageBox::Ok){
                playerTurn++;
                startGame();
            }
        }else{
            playerTurn++;
            startGame();
        }
    }
}

void MainWindow::passed()
{
    playerTurn++;
    startGame();
}

void MainWindow::rolled(bool g)
{
    if(g)
        human =-1;
    else
        human = whichToMove(playerTurn%4);

    dd.show();
    dd.rolldice((playerTurn % 4)+1 ,playerActive[playerTurn%4],human);
}

void MainWindow::activateMessageBoxes()
{
    notASix.setGeometry(400,400,500,200);
    reRoll.setGeometry(400,400,600,200);
    reRoll.setFixedWidth(900);

    notASix.setIcon(QMessageBox::Critical);
    notASix.setWindowTitle("Can't Move");
    notASix.setText("You need to get a six to move that token");
    notASix.addButton(QMessageBox::Ok);

    reRoll.setIcon(QMessageBox::Information);
    reRoll.setWindowTitle("Roll Again!");
    reRoll.setInformativeText("You got a six, Roll Agian");
    reRoll.addButton(QMessageBox::Yes);
}

void MainWindow::eatPieceHere(int k)
{
    eat=false;
    for(int d =0; d<16 ; d++ ){
        if(k/4 != d/4){
            if(gameT[d]->isMovable && gameT[d]->getTotalNo()!= -1 && gameT[k]->getTotalNo() != -1){
                if(gameT[k]->getTotalNo() == gameT[d]->getTotalNo() ){
                    gameT[d]->backmover();
                    eat = true;
                }
            }
        }
    }//think of a more ingenius way for the slot below lol. as it might run into an error if two tokens are in the same spot
    if(!eat){
        gameT[tokenToMove]->forAllTokens();
    }

}

void MainWindow::checkIfEnd(int x)
{
    x*=4;
    if(gameT[x]->reachEnd&&gameT[x+1]->reachEnd&&gameT[x+2]->reachEnd&&gameT[x+3]->reachEnd){
        x/=4;
        if(x==0)a="RED";else if(x==1)a="GREEN";else if(x==2)a="YELLOW";else a="BLUE";
        QMessageBox box(QMessageBox::Information,"WINNER!","PLAYER"+a+"WINS",QMessageBox::Yes);
        if(box.exec() == QMessageBox::Yes){
            QApplication::quit();
        }
    }

}

int MainWindow::whichToMove(int x)
{
    x*=4;
    if(!gameT[x]->reachEnd){
        if(gameT[x]->getTotalNo() == -1){
            if(gameT[x+1]->isMovable){
                return ((gameT[x]->getPos()*100) + 0);
            }else{
                return 4;
            }
        }
        return 0;
    }else if(!gameT[x+1]->reachEnd){
        if(gameT[x + 1]->getTotalNo() == -1){
            if(gameT[x+2]->isMovable){
                return ((gameT[x+1]->getPos()*100) + 1);
            }else{
                return 5;
            }
        }
        return 1;
    }else if(!gameT[x+2]->reachEnd){
        if(gameT[x + 2]->getTotalNo() == -1){
            if(gameT[x+3]->isMovable){
                return ((gameT[x+2]->getPos()*100) + 2);
            }else{
                return 6;
            }
        }
        return 2;
    }else{
        return 3;
    }
}

void MainWindow::settingActivePlayers(int j)
{
    for(int i = 0; i < j ; i++){
        playerActive[i] = true;
    }
}
