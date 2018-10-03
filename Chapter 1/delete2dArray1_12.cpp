template<class T>
void delete2dArray(T ** &x, int numberOfRow)
{
    for (int i = 0;i < numberOfRows; i++)
        delete [] x[i];
    
    delete [] x;
    x = NULL;
}