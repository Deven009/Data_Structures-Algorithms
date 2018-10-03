#include<cmath>
template<class T>
T * changeLength1D(T * oldArray,int oldLength,int newLength)
{
    T *newArray = new int[newLength];

    for (int i = 0;i < Math.min(oldLength, newLength); i++)
        newArray[i] = oldArray[i];
    return newArray;
}
