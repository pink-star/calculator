#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QString>
#include <string.h>//str.erase函数
#include <math.h>

class Calculator
{
public:

    int top;//栈顶点指针
    QString data;//栈数据
    double resultData[25];//逆波兰表达式计算用的栈
    int resultTop;//第二个栈的顶点指针

    Calculator();

    //栈
    void initStack();//初始化栈
    QChar topData();//得到栈顶元素
    bool isEmpty();//判断栈是否为空
    void push(QChar);//入栈
    QChar pop();//出栈，并返回出栈的元素
    //第二栈
    double topResult();
    bool isEmptyResult();
    void pushResult(double);
    double popResult();


    bool isNumber(QChar);//检查是否为数字
    int charToInt(QChar);//将char的0-9转化为int型
    int Level(QChar);//比较优先级
    QString changeNumberInExp(QString);//将str中的多位数字转化成  (运算)    形式
    double changeStrToNumber(QString);//将str转为数字
    QString changeExpression(QString);//中缀表达式转后缀表达式(用long数组来装后缀表达式以便计算)

    double factorial(int);//阶乘函数
    double calculate(QString);//由后缀表达式算出结果
};

#endif // CALCULATOR_H
