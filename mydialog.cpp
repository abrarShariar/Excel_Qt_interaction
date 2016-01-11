#include "mydialog.h"
#include "ui_mydialog.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QFile>
#include<QDesktopServices>
#include<QUrl>
#include<QDebug>
#include<QProcess>
//#include "read.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    //this->setTitle("New Title");
    ui->setupUi(this);
}

MyDialog::~MyDialog()
{
    delete ui;
}

//choose file 01
void MyDialog::on_pushButton_clicked()
{
       QString filename=QFileDialog::getOpenFileName(
                   this,
                    tr("Customer Details File Selector"),
                   "C:\\",
                    "Excel files(*.csv*)");


                                             //display filename path

        QString destination="../Cpp/CustomerDetails/CustomersDetails.csv";            //destination folder for selected file
        if(QFile::exists(destination)){
            QFile::remove(destination);                                     //remove file if already exists
        }
        QFile::copy(filename,destination);                                      //http://stackoverflow.com/questions/19928216/qt-copy-a-file-from-one-directory-to-another
        ui->lineEdit->setText(filename);
}

//choose file 02
void MyDialog::on_pushButton_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(
                this,
                 tr("Customer Bills File Selector"),
                "C:\\",
                 "Excel files(*.csv)");
    QString destination="../Cpp/CustomerBills/CustomersBills.csv";            //destination folder for selected file
    if(QFile::exists(destination)){
        QFile::remove(destination);                                    //remove file if already exists
    }

    QFile::copy(filename,destination);                                  //http://stackoverflow.com/questions/19928216/qt-copy-a-file-from-one-directory-to-another
    ui->lineEdit_2->setText(filename);
}

void MyDialog::on_pushButton_3_clicked()
{
    //text & trail
    /*
    QString filename=QFileDialog::getOpenFileName(
                this,
                 tr("Read Data"),
                "E:\\",
                 "executable files(*.exe)");
    qDebug()<<filename;
    */
    //QString filename=".\\read.exe";
    //QUrl url("./read.exe");

   // QDesktopServices::openUrl(QUrl(url.fileName(),QUrl::TolerantMode));           //run read.exe to generate output
   //TolerantMode for windows only

    QProcess::startDetached("../Cpp/read.exe");
}
