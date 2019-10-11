#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn0_clicked()
{
    entry = "0";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn1_clicked()
{
    entry = "1";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn2_clicked()
{
    entry = "2";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn3_clicked()
{
    entry = "3";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn4_clicked()
{
    entry = "4";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn5_clicked()
{
    entry = "5";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn6_clicked()
{
    entry = "6";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn7_clicked()
{
    entry = "7";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn8_clicked()
{
    entry = "8";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btn9_clicked()
{
    entry = "9";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btndec_clicked()
{
    entry = ".";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btnans_clicked()
{
    entry = "ANS";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btneql_clicked()
{
    answer = parse.solve_eq(ui->lineEdit->text(),sanswer);
    sanswer.setNum(answer,'g',6);
    ui->lineEdit_2->setText(sanswer);
}

void MainWindow::on_btnadd_clicked()
{
    entry = "+";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btnsub_clicked()
{
    entry = "-";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_btnmul_clicked()
{
    if(!shift){
        entry = "*";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "P";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_btndiv_clicked()
{
    if(!shift){
        entry = "/";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "C";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_btndele_clicked()
{
    ui->lineEdit->backspace();
}

void MainWindow::on_btnAc_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

void MainWindow::on_bttalpha_clicked()
{
    alpha = !alpha;
    if(alpha){
        ui->labelalpha->setText("A");
    }
    if(!alpha){
        ui->labelalpha->setText("  ");
    }
}

void MainWindow::on_btton_clicked()
{
    QApplication::quit();
}

void MainWindow::on_bttmode_clicked()
{

}

void MainWindow::on_butsin_clicked()
{
    if(alpha){
        entry = "D";
        ui->lineEdit->insert(entry);
        return;
    }
    if(!shift){
        entry = "sin(";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "sin-1(";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butcos_clicked()
{
    if(alpha){
        entry = "E";
        ui->lineEdit->insert(entry);
        return;
    }
    if(!shift){
        entry = "cos(";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "cos-1(";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_buttan_clicked()
{
    if(alpha){
        entry = "F";
        ui->lineEdit->insert(entry);
        return;
    }
    if(!shift){
        entry = "tan(";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "tan-1(";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butrbr_clicked()
{
    if(alpha){
        entry = "X";
        ui->lineEdit->insert(entry);
        return;
    }
    entry = ")";
    ui->lineEdit->insert(entry);
}

void MainWindow::on_bttshift_clicked()
{
    shift = !shift;
    if(shift){
        ui->labelshift->setText("S");
    }
    if(!shift){
        ui->labelshift->setText("  ");
    }
}

void MainWindow::on_butsqr_clicked()
{
    if(!shift){
        entry = "sqrt(";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "cubrt(";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butln_clicked()
{
   if(!shift){
       entry = "ln(";
       ui->lineEdit->insert(entry);
   }
   if(shift){
       entry = "exp(";
       ui->lineEdit->insert(entry);
   }
}
void MainWindow::on_butmns_clicked()
{
    if(alpha){
        entry = "A";
        ui->lineEdit->insert(entry);
        return;
    }
    if(!shift){
        entry = '-';
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butdot_clicked()
{
    if(alpha){
        entry = "B";
        ui->lineEdit->insert(entry);
        return;
    }
}

void MainWindow::on_buthyp_clicked()
{
    if(alpha){
        entry = "C";
        ui->lineEdit->insert(entry);
        return;
    }
}

void MainWindow::on_butcom_clicked()
{
    if(alpha){
        entry = "Y";
        ui->lineEdit->insert(entry);
        return;
    }
}

void MainWindow::on_butmpl_clicked()
{
    if(alpha){
        entry = "M";
        ui->lineEdit->insert(entry);
        return;
    }
}

void MainWindow::on_butrai_clicked()
{
    if(!shift){
        entry = "^";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "√";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butsqd_clicked()
{
    if(!shift){
        entry = "^2";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "^3";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butlog_clicked()
{
    if(!shift){
        entry = "log(";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "10^";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butx1_clicked()
{
    if(!shift){
        entry = "^-1";
        ui->lineEdit->insert(entry);
    }
    if(shift){
        entry = "!";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_butlbr_clicked()
{
    if(!shift){
        entry = "(";
        ui->lineEdit->insert(entry);
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->cursorBackward(false,1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->cursorForward(false,1);
}
