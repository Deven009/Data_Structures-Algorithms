template<class T>
T sum(T a[], int n)
{
    T theSum = 0;
    for(int i=0;i<n;i++)
        theSum += a[i];
    return theSum;
}