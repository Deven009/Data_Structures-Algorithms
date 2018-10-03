template<class T>
int count(T *a, T value, int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
        if (value == a[i])
            ++count;
    return count;
}