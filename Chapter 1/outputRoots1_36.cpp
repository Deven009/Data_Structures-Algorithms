#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

void outputRoots(const double& a, const double& b, const double& c)
{// 计算和输出二次方程的根
    double  d = b * b - 4 * a * c;
    if(d > 0)
    {// 两个实根
        double sqrtd = sqrt(d);
        cout << "There are two real roots "
             << (-b + sqrtd) / (2 * a) << " and "
             << (-b - sqrtd) / (2 * a) << endl;
    }
    else if(d == 0) // 两个根相同
        cout << "There is only one distinct root "
             << -b / (2 * a) << endl;
    else // 复数共轭根
        cout << "The roots are complex" << endl
             << "The real part is "
             << -b / (2 * a) << endl
             << "The imaginary part is "
             << sqrt(-d) / (2 * a) << endl;
}