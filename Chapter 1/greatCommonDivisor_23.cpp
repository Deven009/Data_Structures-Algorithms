#include <iostream>

int gcd(int i,int j){
    int min = i<j?i:j;
    while(i%min!=0||j%min!=0)
        min--;
    return min;

    // return j==0?i:gcd(j,i%j);
}
int main()
{
    std::cout<<gcd(13,27);
}