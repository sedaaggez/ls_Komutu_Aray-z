#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
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
void MainWindow::cikti_hesapla(QString p){
    QProcess proc;
    proc.start("bash", QStringList()<<"-c"<<"ls "+p);
    proc.waitForBytesWritten();
    proc.waitForFinished();
    QString ciktiyazi=proc.readAll();
    ui->listWidget->clear();
    ui->listWidget->addItem(ciktiyazi);

}

void MainWindow::on_pushButton_clicked()
{
    cikti_hesapla("-l");
}
void MainWindow::on_pushButton_2_clicked()
{
    cikti_hesapla("-a");
}
void MainWindow::on_pushButton_3_clicked()
{
    cikti_hesapla("-A");
}
void MainWindow::on_pushButton_4_clicked()
{
    cikti_hesapla("__author -l");
}
void MainWindow::on_pushButton_5_clicked()
{
    cikti_hesapla("-b");
}
void MainWindow::on_pushButton_7_clicked()
{
    cikti_hesapla("-B");
}
void MainWindow::on_pushButton_8_clicked()
{
    cikti_hesapla("-c -lt");
}
void MainWindow::on_pushButton_9_clicked()
{
    cikti_hesapla("-C");
}
void MainWindow::on_pushButton_11_clicked()
{
    cikti_hesapla("-d");
}
void MainWindow::on_pushButton_12_clicked()
{
    cikti_hesapla("-D");
}
void MainWindow::on_pushButton_13_clicked()
{
    cikti_hesapla("-f");
}
void MainWindow::on_pushButton_14_clicked()
{
    cikti_hesapla("-F");
}
void MainWindow::on_pushButton_15_clicked()
{
    cikti_hesapla("--file-type");
}
void MainWindow::on_pushButton_18_clicked()
{
    cikti_hesapla("-g");
}
void MainWindow::on_pushButton_19_clicked()
{
    cikti_hesapla("-G");
}
void MainWindow::on_pushButton_20_clicked()
{
    cikti_hesapla("-h -l");
}
void MainWindow::on_pushButton_21_clicked()
{
    cikti_hesapla("--si");
}
void MainWindow::on_pushButton_22_clicked()
{
    cikti_hesapla("-H");
}
void MainWindow::on_pushButton_23_clicked()
{
    cikti_hesapla("-i");
}
void MainWindow::on_pushButton_25_clicked()
{
    cikti_hesapla("-k");
}
void MainWindow::on_pushButton_26_clicked()
{
    cikti_hesapla("-l");
}
void MainWindow::on_pushButton_27_clicked()
{
    cikti_hesapla("-L");
}
void MainWindow::on_pushButton_28_clicked()
{
    cikti_hesapla("-m");
}
void MainWindow::on_pushButton_29_clicked()
{
    cikti_hesapla("-n");
}
void MainWindow::on_pushButton_30_clicked()
{
    cikti_hesapla("-N");
}
void MainWindow::on_pushButton_31_clicked()
{
    cikti_hesapla("-o");
}
void MainWindow::on_pushButton_32_clicked()
{
    cikti_hesapla("-p");
}
void MainWindow::on_pushButton_33_clicked()
{
    cikti_hesapla("-q");
}
void MainWindow::on_pushButton_34_clicked()
{
    cikti_hesapla("-Q");
}
void MainWindow::on_pushButton_35_clicked()
{
    cikti_hesapla("-r");
}
void MainWindow::on_pushButton_36_clicked()
{
    cikti_hesapla("-R");
}
void MainWindow::on_pushButton_37_clicked()
{
    cikti_hesapla("-s");
}
void MainWindow::on_pushButton_38_clicked()
{
    cikti_hesapla("-S");
}
void MainWindow::on_pushButton_42_clicked()
{
    cikti_hesapla("-t");
}
void MainWindow::on_pushButton_44_clicked()
{
    cikti_hesapla("-u -lt");
}
void MainWindow::on_pushButton_45_clicked()
{
    cikti_hesapla("-U");
}
void MainWindow::on_pushButton_46_clicked()
{
    cikti_hesapla("-v");
}
void MainWindow::on_pushButton_47_clicked()
{
    cikti_hesapla("-w");
}
void MainWindow::on_pushButton_48_clicked()
{
    cikti_hesapla("-x");
}
void MainWindow::on_pushButton_49_clicked()
{
    cikti_hesapla("-X");
}
void MainWindow::on_pushButton_50_clicked()
{
    cikti_hesapla("-Z");
}
void MainWindow::on_pushButton_51_clicked()
{
    cikti_hesapla("-1");
}
void MainWindow::on_pushButton_52_clicked()
{
    cikti_hesapla("--help");
}
void MainWindow::on_pushButton_53_clicked()
{
    cikti_hesapla("--version");
}

