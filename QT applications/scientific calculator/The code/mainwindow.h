#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "charlie_parser.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btndec_clicked();

    void on_btnans_clicked();

    void on_btneql_clicked();

    void on_btnadd_clicked();

    void on_btnsub_clicked();

    void on_btnmul_clicked();

    void on_btndiv_clicked();

    void on_btndele_clicked();

    void on_btnAc_clicked();

    void on_bttalpha_clicked();

    void on_btton_clicked();

    void on_bttmode_clicked();

    void on_butsin_clicked();

    void on_butcos_clicked();

    void on_buttan_clicked();

    void on_butrbr_clicked();

    void on_bttshift_clicked();

    void on_butsqr_clicked();

    void on_butln_clicked();

    void on_butmns_clicked();

    void on_butdot_clicked();

    void on_buthyp_clicked();

    void on_butcom_clicked();

    void on_butmpl_clicked();

    void on_butrai_clicked();

    void on_butsqd_clicked();

    void on_butlog_clicked();

    void on_butx1_clicked();

    void on_butlbr_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QString entry;
    double answer;
    QString sanswer = "0";
    bool shift = false;
    bool alpha = false;
    Charlie_parser parse;
};

#endif // MAINWINDOW_H
