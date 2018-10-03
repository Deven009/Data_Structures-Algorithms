template<class T>
void make2dArray(T ** &x, int numberOfRows, int numberOfColumns)
{
    x = new T * [numberOfRows];

    for (int i = 0;i < numberOfRows; i++)
        x[i] = new int [numberOfColumns];
}

