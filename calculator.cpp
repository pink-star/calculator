#include "calculator.h"

Calculator::Calculator()
{

}

//判断是否为数字
bool Calculator::isNumber(QChar c){
    if(c >= '0' && c <= '9'){
        //是数字
        return true;
    }else {
        return false;
    }

}

//将char的0-9转化为int型
int Calculator::charToInt(QChar c){
    int num;
    QString str;
    str.append(c);
    num = str.toInt();
    return num;
}

//初始化栈
void Calculator::initStack(){
    top = -1;
    data = "";
    resultTop = -1;
}


//判断栈是否为空
bool Calculator::isEmpty(){
    //若top = -1则为空栈
    if(top == -1){
        return true;
    }
    return false;
}

//得到栈顶元素
QChar Calculator::topData(){
    return data[top];
}

//入栈
void Calculator::push(QChar c){

    top++;//栈顶指针上移
    data[top] = c;//c入至栈顶

}

//出栈，并返回出栈的元素
QChar Calculator::pop(){

    QChar e = data[top];
    //删除最后一个字符，即栈顶元素
    data = data.remove(data.length()-1, 1);
    top--;
    return e;
}

//**********************第二栈
double Calculator::topResult(){
    return resultData[resultTop];
}
bool Calculator::isEmptyResult(){
    if(resultTop == -1){
        return true;
    }else {
        return false;
    }
}

void Calculator::pushResult(double c){//入栈
    resultTop++;//栈顶指针上移
    resultData[resultTop] = c;//c入至栈顶
}
double Calculator::popResult(){

    double e = resultData[resultTop];
    //删除最后一个字符，即栈顶元素
    resultTop--;
    return e;
}


int Calculator::Level(QChar c){
    int level = -1;
    int choice;
    if(c == 's' || c == 'c' || c == 't' || c == 'g' || c == 'v' || c == 'n' || c == '!' || c == '~'){
        choice = 4;
    }else if (c == 'm') {
        choice = 3;
    }else if (c == '*' || c == '/') {
        choice = 2;
    }else if (c == '+' || c == '-'){
        choice = 1;
    }else if(c == '&' || c == '|' || c == '^'){
        choice = 0;
    }else{
        choice = -1;
    }
    switch (choice) {

    case 3:   level = 3; break;

    case 2:   level = 2; break;

    case 1:   level = 1; break;

    case 0:   level = 0; break;
    default:  level = -1;
    }
    return level;
}

//中缀表达式转后缀表达式
QString Calculator::changeExpression(QString str){
    Calculator stack = Calculator();
    stack.initStack();//初始化栈
    QString newStr;
    //必定以数字开头
    for(int i = 0; i < str.length(); i++){

       //若为  数字或者.，直接输出
        if(isNumber(str[i]) || str[i] == '.'){
            newStr.append(str[i]);

            if(i == str.length()-1){
                //最后一个元素
                newStr.append(' ');
            }else if(!isNumber(str[i+1]) && str[i+1] != '.'){
                //不为最后一个元素,且下一个元素不是数或者.
                newStr.append(' ');
            }
        }else {

            //若为 ( 或者 栈为空则直接入栈
            if(str[i] == '(' || stack.isEmpty()){
                stack.push(str[i]);
            }else if(str[i] == ')'){
                while(!stack.isEmpty()){//不为空则栈顶元素出栈并输出
                    QChar c = stack.pop();
                    if(c == '('){//直到出栈的元素为     (
                        break;
                    }
                    newStr.append(c);//输出
                }
            }else{//不为 () 的符号
                //栈不为空，则与栈顶元素进行优先级比较,    优先级低则挡不住想要出栈的元素

                while(!stack.isEmpty() && Level(str[i]) <= Level(stack.topData())){
                        QChar c = stack.pop();//出栈
                        newStr.append(c);//输出

                }

                //没有元素能输出了则入栈
                stack.push(str[i]);
            }
        }

    }
    //遍历完后，栈内元素全部输出
    while(!stack.isEmpty()){
        newStr.append(stack.pop());
    }
    return newStr;
}

//将str转为double
double Calculator::changeStrToNumber(QString str){
    double num = 0;
    int index = str.lastIndexOf('.');
    if(index < 0){//无小数
        num = double(str.toDouble());
    }else {//有小数
        for(int i = 0; i < str.length(); i++){
            if(i < index){
//                smallStr.append(tempStr[j] + "*10m" + smallStr.number(index-j-1) + '+');
                num += charToInt(str[i])*pow(10, index-i-1);
            }else if(i > index){//小数点后
//                smallStr.append(tempStr[j] + "/10m" + smallStr.number(j-index) + '+');
                num += charToInt(str[i])*pow(10, index-i);
            }
        }
    }
    return num;
}

//阶乘函数
//double Calculator::factorial(int m){
//   double sum = 0;
//   if(m == 0)
//   {
//       return (1);
//   }
//   else {
//       sum = m*factorial(m - 1);
//   }
//   return sum;
//}

double Calculator::factorial(int m){
    double result = 1;
    for(int i = m; i > 0; i--){
        result *= i;
    }
    return result;
}



//通过后缀表达式计算结果
double Calculator::calculate(QString firstStr){
    double result = 0;//结果
    Calculator stack;
    stack.initStack();//初始化栈
    QString str = stack.changeExpression(firstStr);//中转后
    QString tempStr;
    double m, n, num;
    for(int i = 0 ; i < str.length(); i++){
        if(isNumber(str[i]) || str[i] == '.'){//若是数字或者·则先储存

            tempStr.append(str[i]);
//            //每当凑够一个数字之后入栈   ->最后一个元素 || 下一个元素为' '
//            if(i == str.length()-1 || (i != str.length()-1 && str[i+1] == ' ' )){
//                stack.pushResult(changeStrToNumber(tempStr));//入栈
//            }
        }else if(str[i] == ' '){//遇空格则表示tempStr中已有一个完整数字
            stack.pushResult(changeStrToNumber(tempStr));//入栈
            tempStr.remove(0, tempStr.length());//清空tempStr
        }else{//若不为数字则运算 + - * /        m(^)    s c t g n v(√) !
            if(str[i] == '+'){
                n = stack.popResult();
                m = stack.popResult();
                num = m + n;
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '-'){
                n = stack.popResult();
                m = stack.popResult();
                num = m - n;
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '*'){
                n = stack.popResult();
                m = stack.popResult();
                num = m * n;
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '/'){
                n = stack.popResult();
                m = stack.popResult();
                num = m / n;
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 'm'){//幂函数
                n = stack.popResult();
                m = stack.popResult();
                num = pow(m, n);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 's'){
                m = stack.popResult();
                num = sin(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 'c'){
                m = stack.popResult();
                num = cos(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 't'){
                m = stack.popResult();
                num = tan(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 'g'){//lg
                m = stack.popResult();
                num = log10(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 'n'){//ln
                m = stack.popResult();
                num = log(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == 'v'){//√
                m = stack.popResult();
                num = sqrt(m);
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '!'){
                m = stack.popResult();
                num = factorial(int(m));
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '&'){
                m = stack.popResult();
                n = stack.popResult();
                num = double(int(m) & int(n));
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '|'){
                m = stack.popResult();
                n = stack.popResult();
                num = double(int(m) | int(n));
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '^'){
                m = stack.popResult();
                n = stack.popResult();
                num = double(int(m) ^ int(n));
                stack.pushResult(num);//运算完毕后再次入栈
            }else if(str[i] == '~'){
                m = stack.popResult();
                num = double(~int(m));
                stack.pushResult(num);//运算完毕后再次入栈
            }
        }

    }
    result = stack.popResult();
    return result;
}
