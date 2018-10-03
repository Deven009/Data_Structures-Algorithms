#include <iostream>

using namespace std;

 void grayCode(int n)
 {
    if (n==1)
        cout << "1";
    else
    {
        grayCode(n - 1);
        cout << n;
        grayCode(n - 1);
    }
 }

 int main()
 {
     grayCode(3);
     return 0;
 }