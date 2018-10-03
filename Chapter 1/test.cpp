#include<iostream>
float abc(float a, float b, float c)
{
    return a + b * c;
}
int abc(int a, int b, int c)
{
    return a + b * c;
}
int main()
{
    std::cout << abc(1,2,3);
    return 0;
}