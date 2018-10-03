template <class T>
int mismatch(T *a, T *b, int n)
{
    for(int i=0;i<n;i++)
        if (a[i] != b[i])
            return i;
    return -1;
}