#include "home.h"
#include "ui_home.h"
#include "secdialog.h"
#include "notepad.h"

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}




void Home::on_pushButton_clicked()
{
    SecDialog secdialog;
    secdialog.setModal(true);
    secdialog.exec();

}

void Home::on_pushButton_2_clicked()
{

}

void Home::on_pushButton_3_clicked()
{
    //Notepad notepad;
    //notepad.setModal(true);
    //notepad.exec();
    //notepad = new class notepad(this);
    //notepad -> show();
    notepad=new class notepad(this);
    notepad show;
}
