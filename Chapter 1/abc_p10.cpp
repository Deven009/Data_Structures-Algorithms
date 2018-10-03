#include<iostream>
using namespace std;
int abc(int a, int b, int c)
{
    if(a<0&&b<0&&c<0)
        throw 1;
    else if(a==0&&b==0&&c==0)
        throw 2;
    return a + b * c;
}
int main()
{
    try {cout << abc(0,0,0) << endl;}
    catch (int e)
        {   
            if (e==1)
                cout << "The parameters to abc should not < 0" << endl;
            else
                cout << "The parameters to abc should not = 0" << endl;
            return 1;
        }
    return 0;
}