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
        signType getSign() const 
        {
            if(amount < 0)
                return minus;
            else
                return plus;
        }
        unsigned long getDollars() const 
        { 
            if(amount < 0)
                return (-amount) / 100;
            else
                return amount / 100;    
        }
        unsigned int getCents() const 
        { 
            if (amount < 0)
                return -amount - getDollars() * 100;
            else
                return amount - getDollars() * 100;
        }
        currency add(const currency&) const;
        currency& increment(const currency& x)
        { 
            amount += x.amount; 
            return *this;
        }
        void output() const;

    private:
        long amount;
      
};

currency::currency(signType theSign, unsigned long theDollars, unsigned int theCents)
{// 创建一个 currency 类对象
    setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{// 给调用对象的数据成员赋值
    if(theCents > 99)
        // 美分值太大
        throw illegalParameterValue("Cents should be < 100"); // 见 1_26
    
    amount = theDollars *100 + theCents;
    if(theSign == minus) amount = -amount;
}

void currency::setValue(double theAmount)
{// 给调用对象的数据成员赋值
    if (theAmount < 0) 
        amount = (long) ((theAmount - 0.001) * 100);
    else 
        amount = (long) ((theAmount + 0.001) * 100);
}

currency currency::add(const currency& x) const
{// 把 x 和 *this 相加
    currency y;
    y.amount = amount + x.amount;
    return y;
}

void currency::output() const 
{// 输出调用对象的值
    long theAmount = amount;
    if(theAmount < 0)
    {
        cout << '-';
        theAmount = -theAmount;
    } 
    long dollars = theAmount / 100;
    cout << '$' << dollars << ".";
    int cents = theAmount - dollars * 100;
    if(cents < 10)
        cout << '0';
    cout << cents;
}

#endif