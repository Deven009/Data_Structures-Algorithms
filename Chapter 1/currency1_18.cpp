#include <iostream>
#include "currency1_13.h"

using namespace std;
int main()
{
    currency g, h(plus, 3, 50), i, j;
    
    // 使用两种形式的 setValue 来赋值
    g.setValue(minus, 2, 25);
    i.setValue(-6.45);

    // 调用成员函数 add 和 output
    j = h.add(g);
    h.output();
    std::cout << " + ";
    g.output();
    std::cout << " = ";
    j.output();
    std::cout << std::endl;

    // 连续调用两次成员函数 add
    j = i.add(g).add(h);
        // 省略了输出语句
    
    // 调用成员函数 increment 和 add
    j = i.increment(g).add(h);
        // 省略了输出语句
    
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
