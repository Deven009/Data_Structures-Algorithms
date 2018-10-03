template<class T>
void make2dArray(T ** &x, int numberOfRows, int * rowSize)
{
    x = new T * [numberOfRows];

    for (int i = 0;i < numberOfRows; i++)
        x[i] = new int [rowSize[i]];
}
