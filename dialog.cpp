#include "dialog.h"
#include "ui_dialog.h"
#include "mydialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
   MyDialog dialog;
   dialog.setModal(true);
   dialog.exec();

}
