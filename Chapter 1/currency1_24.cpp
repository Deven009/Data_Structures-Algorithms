#include <iostream>
#include "currency1_22.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    currency g, h(plus, 3, 50), i, j;
    
    // 使用两种形式的 setValue 来赋值
    g.setValue(minus, 2, 25);
    i.setValue(-6.45);

    // 调用成员函数 add 和 output
    j = h + g;
    cout << h << " + " << g << " = " << j << endl;
    
    // 连续两次调用成员函数 add
    j = i + g + h;
    cout << i << " + " << g << " + " << h << " = " << j << endl;
    
    // 调用成员函数 increment 和 add
    cout << "Increment " << i << " by " << g << " and then add " << h << endl;
    j = (i += g) + h;
    cout << "Result is " << j << endl;
    cout << "Incremented object is " << i << endl;
    
    // 测试异常
    cout << "Attempting to initialize with cents =152" << endl;
    try {i.setValue(plus, 3, 152);}
    catch (illegalParameterValue e)
    {
        cout << "Caught thrown exception" << endl;
        e.outputMessage();
    }
    return 0;
}
