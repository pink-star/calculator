#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}

dialog::~dialog()
{
    delete ui;
}
