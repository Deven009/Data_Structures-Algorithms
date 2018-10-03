#include<cmath>
template<class T>
T ** changeLength2D(T ** oldArray,int oldRowLength,int oldColLength,int newRowLength,int newColLength)
{
    T ** newArray = new T * [newRowLength];

    for (int i = 0;i < newRowLength; i++)
        x[i] = new int [newColLength;
    
    minRow = Math.min(oldRowLength, newRowLength);
    minCol = Math.min(oldColLength, newColLength);

    for(int i=0;i<minRow;i++)
        for(int j=0;j<minCol;j++)
            newArray[i][j] = oldArray[i][j];
    return newArray;
}