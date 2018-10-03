#include <iostream>
#include <cmath>
int ackermann(int i, int j)
{
    int result;
    if (i==1 && j>=1)
        result = pow(2, j);
    else if(j==1 && i>=2)
        result = ackermann(i-1,2);
    else
        result = ackermann(i-1, ackermann(i,j-1));
    return result;
}
int main()
{
    std::cout << ackermann(2,2);
}