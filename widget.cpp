#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <dialog.h>
#include <QLabel>
#include <QPixmap>
#include "calculator.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    QString str;
    QString run;
    QString history;
    bool defult = false;    //判断运算符能否输入
    bool eandpi = true;     //判断Π/e是否能输入
    bool num = true;        //判断数字能否输入
    bool dian = true;       //判断小数点是否能输入
    bool sincostan = true;  //判断sin/cos/tan能否输入
    bool lg_ln = true;      //判断lg和ln是否能输入
    bool JC = false;        //判断阶乘能否输入
    bool cimi = false;      //判断能否输入次幂
    bool Daoshu = false;    //判断能否取倒数
    bool genhao = true;     //判断能否输入根号
    bool left = true;       //判断能否输入左括号
    bool right = false;     //判断能否输入右括号
    bool fan = false;
    bool other = false;
    int leftcount = 0;
    int rightcount = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_1_clicked()
{
    if(num == true)
    {
    QString str_temp = "1";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;      //输入数字后可以马上加减乘除
    eandpi = false;     //输入数字后不可加马上输入e/pi
    sincostan = false;  //输入数字后不可以马上输入sin/cos/tan
    lg_ln = false;      //输入数字后不可以马上输入lg和ln
    JC = true;          //输入数字后马上可以输入阶乘
    cimi = true;        //输入数字后可以马上输入次幂
    Daoshu = true;      //输入数字后可以马上接倒数
    genhao = false;     //输入数字后不可以马上加根号
    left = false;       //输入数字后不可以马上加左括号
    right = true;       //输入数字后可以马上加右括号
    fan = true;
    other = true;
    }
}

void Widget::on_btn_0_clicked()
{
    if(num == true)
    {
    QString str_temp = "0";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_2_clicked()
{
    if(num == true)
    {
    QString str_temp = "2";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}


void Widget::on_btn_3_clicked()
{
    if(num == true)
    {
    QString str_temp = "3";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_4_clicked()
{
    if(num == true)
    {
    QString str_temp = "4";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_5_clicked()
{
    if(num == true)
    {
    QString str_temp = "5";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_6_clicked()
{
    if(num == true)
    {
    QString str_temp = "6";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_7_clicked()
{
    if(num == true)
    {
    QString str_temp = "7";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_8_clicked()
{
    if(num == true)
    {
    QString str_temp = "8";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_9_clicked()
{
    if(num == true)
    {
    QString str_temp = "9";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_back_clicked()
{
    if(str != "")
    {
    if(str[str.length() - 1] == ")")
        leftcount ++;
    str = str.left(str.length() - 1);
    run = run.left(run.length() - 1);
    ui->result->setText(str);
        if(str != "")
        {
              QString number = "0123456789";
              if(number.indexOf(str[str.length() - 1]) != -1)
              {
                  defult = true;
                  eandpi = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = true;
                  cimi = true;
                  Daoshu = true;
                  genhao = false;
                  left = false;
                  right = true;
                  num = true;
              }
              else if(str[str.length() - 1] == "(")
              {
                  defult = false;
                  eandpi = true;
                  num = true;
                  dian = true;
                  sincostan = true;
                  lg_ln = true;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = true;
                  left = true;
                  right = false;
                  leftcount++;
              }
              else if(str[str.length() - 1] == "!")
              {
                  defult = true;
                  eandpi = false;
                  num = false;
                  dian = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = true;
                  cimi = true;
                  Daoshu = true;
                  genhao = false;
                  left = false;
                  right = true;
              }
              else if(str[str.length() - 1] == "^")
              {
                  defult = false;
                  eandpi = true;
                  num = true;
                  dian = false;
                  sincostan = true;
                  lg_ln = true;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = true;
                  left = true;
                  right = false;
              }
              else if(str[str.length() - 1] == "√")
              {
                  defult = false;
                  eandpi = true;
                  num = true;
                  dian = false;
                  sincostan = true;
                  lg_ln = true;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = true;
                  left = true;
                  right = false;
              }
              else if(str[str.length() - 1] == ")")
              {
                  defult = true;
                  eandpi = false;
                  num = false;
                  dian = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = true;
                  cimi = true;
                  Daoshu = true;
                  genhao = false;
                  left = false;
                  right = true;
              }
              else if(str[str.length() - 1] == "e" || str[str.length() - 1] == "Π")
              {
                  eandpi = false;
                  defult = true;
                  num = false;
                  dian = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = true;
                  cimi = true;
                  Daoshu = true;
                  genhao = false;
                  left = false;
                  right = true;
              }
              else if(str[str.length() - 1] == "＋" || str[str.length() - 1] == "－" || str[str.length() - 1] == "×" ||str[str.length() - 1] == "÷")
              {
                  defult = false;
                  dian = true;
                  eandpi = true;
                  num = true;
                  sincostan = true;
                  lg_ln = true;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = true;
                  left = true;
                  right = false;
              }
              else if(str[str.length() - 1] == ".")
              {
                  eandpi = false;
                  dian = false;
                  defult = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = false;
                  left = false;
                  right = false;
              }

//              QString x = "a";
//              QString y = "9";
//              qDebug() << str[str.length() - 1];
//              qDebug() << number.indexOf(str[str.length() - 1]);
//              qDebug() << number.indexOf(x);
//              qDebug() << number.indexOf(y);
              else if (str[str.length() - 1] == "|" || str[str.length() - 1] == "&" || str[str.length() - 1] == "⊕")
              {
                  defult = false;
                  dian = true;
                  eandpi = true;
                  num = true;
                  sincostan = true;
                  lg_ln = true;
                  JC = false;
                  cimi = false;
                  Daoshu = false;
                  genhao = true;
                  left = true;
                  right = false;
                  fan = false;
                  other = false;
              }
              else if (str[str.length() - 1] == "¬")
              {
                  defult = true;
                  eandpi = false;
                  num = false;
                  dian = false;
                  sincostan = false;
                  lg_ln = false;
                  JC = true;
                  cimi = true;
                  Daoshu = true;
                  genhao = false;
                  left = false;
                  right = true;
                  fan = true;
                  other = true;
              }
        }
        else{
            defult = false;
            eandpi = true;
            num = true;
            dian = true;
            sincostan = true;
            lg_ln = true;
            JC = false;
            cimi = false;
            Daoshu = false;
            genhao = true;
            left = true;
            right = false;
            leftcount = 0;
            rightcount = 0;
        }
    }

}

void Widget::on_btn_sin_clicked()
{
    if(sincostan == true)
    {
    QString str_temp = "sin(";
    str.append(str_temp);
    run.append("s(");
    ui->result->setText(str);
    defult = false;         //sin后不可以马上加运算符
    eandpi = true;          //sin后可以马上加云算法
    num = true;             //sin后可以马上加数字
    dian = true;            //sin后可以马上加小数点
    sincostan = true;       //sin后可以马上加sin/cos/tan
    lg_ln = true;           //sin后可以马上加lg和ln
    JC = false;             //sin后不可以马上加阶乘
    cimi = false;           //sin后不可以马上加次幂
    Daoshu = false;         //sin后不可以马上加倒数符号
    genhao = true;          //sin后可以马上加根号
    left = true;           //sin后不可以马上加左括号
    right = false;          //sin后不可以马上加右括号
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_cos_clicked()
{
    if(sincostan == true)
    {
    QString str_temp = "cos(";
    str.append(str_temp);
    run.append("c(");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_tan_clicked()
{
    if(sincostan == true)
    {
    QString str_temp = "tan(";
    str.append(str_temp);
    run.append("t(");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_lg_clicked()
{
    if(lg_ln == true)
    {
    QString str_temp = "lg(";
    str.append(str_temp);
    run.append("g(");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_ln_clicked()
{
    if(lg_ln == true)
    {
    QString str_temp = "ln(";
    str.append(str_temp);
    run.append("n(");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_jiecheng_clicked()
{
    if(JC == true)
    {
    QString str_temp = "!";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    num = false;
    dian = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}


void Widget::on_btn_mi_clicked()
{
    if(cimi == true)
    {
    QString str_temp = "^";
    str.append(str_temp);
    run.append("m");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = false;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_daoshu_clicked()
{
    if(Daoshu == true)
    {
    QString str_temp = "^(0-1)";
    str.append(str_temp);
    run.append("m(0-1)");
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    num = false;
    dian = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = false;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_genhao_clicked()
{
    if(genhao == true)
    {
    QString str_temp = "√";
    str.append(str_temp);
    run.append("v");
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = false;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}


void Widget::on_btn_left_clicked()
{
    if(left == true)
    {
    QString str_temp = "(";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    leftcount++;
    }
}

void Widget::on_btn_right_clicked()
{
    if(right == true && (rightcount < leftcount))
    {
    QString str_temp = ")";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    num = false;
    dian = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    rightcount++;
    }
}

void Widget::on_btn_e_clicked()
{
    if(eandpi == true)
    {
    QString str_temp = "e";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    eandpi = false;     //输入e/pi后不可以马上再加e/pi
    defult = true;      //输入e/pi后可以马上加e/pi
    num = false;        //输入e/pi后不可以马上加数字
    dian = false;       //输入e/pi后不可以马上加小数点
    sincostan = false;  //输入e/pi后不可以马上接sincostan
    lg_ln = false;      //输入e/pi后不可以马上接lg/ln
    JC = true;          //输入e/pi后可以马上接阶乘
    cimi = true;        //输入e/pi后可以马上接次幂
    Daoshu = true;      //输入e/pi后可以马上接倒数
    genhao = false;
    left = false;
    right = true;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_pi_clicked()
{
    if(eandpi == true)
    {
    QString str_temp = "Π";
    str.append(str_temp);
    run.append("3.1415926");
    ui->result->setText(str);
    eandpi = false;
    defult = true;
    num = false;
    dian = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_result_clicked()
{
    Calculator calculator;
    QString temp =QString::number(calculator.calculate(run), 'g', 10);
    history.append(str);
    history.append("=\n");
    history.append(temp);
    history.append("\n\n");
    ui->result->setText(temp);
    ui->textEdit->setText(history);
    str.clear();
    run.clear();
    str.append(temp);
    run.append(temp);
}

void Widget::on_btn_jia_clicked()
{
    if(defult == true)
    {
    QString str_temp = "+";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = false;     //输入运算符号后不可以马上加运算符号
    dian = true;        //输入运算符号后可以马上加小数点
    eandpi = true;      //输入运算符号后可以马上加e/pi
    num = true;         //输入运算符号后可以马上加数字
    sincostan = true;   //输入运算符号后可以马上加sin/cos/tan
    lg_ln = true;       //输入运算符号后可以马上加lg/ln
    JC = false;         //输入运算符号后不可以马上加阶乘符号
    cimi = false;       //输入运算符号后不可以马上加次幂运算符号
    Daoshu = false;     //输入运算符号后不可以马上加倒数运算符号
    genhao = true;      //输入运算符号后可以马上加根号
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_jian_clicked()
{
    if(defult == true)
    {
    QString str_temp = "-";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_cheng_clicked()
{
    if(defult == true)
    {
    QString str_temp = "×";
    str.append(str_temp);
    run.append("*");
    ui->result->setText(str);
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_chu_clicked()
{
    if(defult == true)
    {
    QString str_temp = "÷";
    str.append(str_temp);
    run.append("/");
    ui->result->setText(str);
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_C_clicked()
{
    str.clear();
    run.clear();
    history.clear();
    ui->result->setText(str);
    ui->textEdit->setText(history);
    defult = false;
    eandpi = true;
    num = true;
    dian = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
}


void Widget::on_btn_dian_clicked()
{
    if(dian == true)
    {
    QString str_temp = ".";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    eandpi = false;     //点了之后e/pi不能马上输入
    dian = false;       //点了之后不能点
    defult = false;     //点后不能马上加运算符
    sincostan = false;  //点了之后不能马上加sin/cos/tan
    lg_ln = false;      //点了之后不能马上加lg/ln
    JC = false;         //点了之后不能马上加阶乘
    cimi = false;       //点了之后不能马上加次幂
    Daoshu = false;     //点了之后不能马上加倒数运算
    genhao = false;      //点了之后不能马上加根号
    left = false;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_help_clicked()
{
//    QMessageBox::information(this,"帮助","这是个帮助按钮");
    dialog * my_dialog = new dialog;
    my_dialog->show();

}

void Widget::on_btn_to2_clicked()
{
    QString temp =QString::number(str.toInt(),2);
    history.append(str);
    history.append("=\n");
    history.append(temp);
    history.append("\n\n");
    ui->result->setText(temp);
    ui->textEdit->setText(history);
    str.clear();
    str.append(temp);
}

void Widget::on_btn_to8_clicked()
{
//    ui->result->setText(QString::number(str.toInt(),8));
    QString temp = QString::number(str.toInt(),8);
    history.append(str);
    history.append("=\n");
    history.append(temp);
    history.append("\n\n");
    ui->result->setText(temp);
    ui->textEdit->setText(history);
    str.clear();
    str.append(temp);
}

void Widget::on_btn_to16_clicked()//转16进制
{
//    ui->result->setText(QString::number(str.toInt(),16));
    QString temp = QString::number(str.toInt(),16);
    history.append(str);
    history.append("=\n");
    history.append(temp);
    history.append("\n\n");
    ui->result->setText(temp);
    ui->textEdit->setText(history);
    str.clear();
    str.append(temp);
}

void Widget::on_btn_Xor_clicked()
{

    if(other)
    {
    str.append("⊕");
    run.append("^");
    ui->result->setText(str);
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_And_clicked()
{
    if(other == true)
    {
    str.append("&");
    run.append("&");
    ui->result->setText(str);
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_Not_clicked()
{
    if(fan == true)
    {
    str.append("¬");
    run.append("~");
    ui->result->setText(str);
    defult = true;
    eandpi = false;
    num = false;
    dian = false;
    sincostan = false;
    lg_ln = false;
    JC = true;
    cimi = true;
    Daoshu = true;
    genhao = false;
    left = false;
    right = true;
    fan = true;
    other = true;
    }
}

void Widget::on_btn_Or_clicked()
{
    if(other == true)
    {
    str.append("|");
    run.append("|");
    ui->result->setText(str);    
    defult = false;
    dian = true;
    eandpi = true;
    num = true;
    sincostan = true;
    lg_ln = true;
    JC = false;
    cimi = false;
    Daoshu = false;
    genhao = true;
    left = true;
    right = false;
    fan = false;
    other = false;
    }
}

void Widget::on_btn_00_clicked()
{
    if(num == true)
    {
    QString str_temp = "00";
    str.append(str_temp);
    run.append(str_temp);
    ui->result->setText(str);
    defult = true;      //输入数字后可以马上加减乘除
    eandpi = false;     //输入数字后不可加马上输入e/pi
    sincostan = false;  //输入数字后不可以马上输入sin/cos/tan
    lg_ln = false;      //输入数字后不可以马上输入lg和ln
    JC = true;          //输入数字后马上可以输入阶乘
    cimi = true;        //输入数字后可以马上输入次幂
    Daoshu = true;      //输入数字后可以马上接倒数
    genhao = false;     //输入数字后不可以马上加根号
    left = false;       //输入数字后不可以马上加左括号
    right = true;       //输入数字后可以马上加右括号
    fan = true;
    other = true;
    }
}
