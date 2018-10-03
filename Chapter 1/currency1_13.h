#ifndef currency_
#define currency_

#include <iostream>
#include "myExceptions.h"

using std::cin;
using std::cout;
using std::endl;

enum signType{plus, minus};

class currency
{
    public:
        // 构造函数
        currency(signType theSign = plus,
                 unsigned long theDollars = 0,
                 unsigned int theCents = 0);
        // 析构函数
        ~currency() {}
        void setValue(signType, unsigned long, unsigned int);
        void setValue(double);
        signType getSign() const { return sign;}
        unsigned long getDollars() const { return dollars;}
        unsigned int getCents() const { return cents;}
        currency add(const currency&) const;
        currency& increment(const currency&);
        void output() const;

    private:
        signType sign;
        unsigned long dollars;
        unsigned int cents;
};

currency::currency(signType theSign, unsigned long theDollars, unsigned int theCents)
{// 创建一个 currency 类对象
    setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{// 给调用对象的数据成员赋值
    if(theCents > 99)
        throw illegalParameterValue("Cents should be < 100"); // 见 1_26
    
    sign = theSign;
    dollars = theCents;
    cents = theCents;
}

void currency::setValue(double theAmount)
{// 给调用对象的数据成员赋值
    if (theAmount < 0) {sign = minus; theAmount = -theAmount;}
    else sign = plus;
    dollars = (unsigned long) theAmount;
    cents = (unsigned int) ((theAmount + 0.001 - dollars) * 100);
}

currency currency::add(const currency& x) const
{// 把 x 和 *this 相加
    long a1, a2, a3;
    currency result;
    // 把调用对象转化成符号整数
    a1 = dollars * 100 + cents;
    if(sign == minus) a1 = -a1;

    // 把 x 转化为符号整数
    a2 = x.dollars * 100 + x.cents;
    if(x.sign == minus) a2 = -a2;

    a3 = a1 + a2;

    // 转换为 currency 对象的表达形式
    if(a3<0) {result.sign = minus; a3 = -a3;}
    else result.sign = plus; 
    result.dollars = a3 /100;
    result.cents = a3 - result.dollars * 100;

    return result;
}

currency& currency::increment(const currency& x)
{// 增加 x
    *this = add(x);
    return *this;
}

void currency::output() const 
{
    if(sign == minus) 
        cout << '-';
    cout << '$' << dollars << ".";
    if(cents < 10) 
        cout << '0';
    cout << cents;
}

#endif
