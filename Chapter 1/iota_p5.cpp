template <class T>
void iota(T *a, T value, int n)
{
    for(int i=0;i<n;i++)
        a[i] = value + i;
}