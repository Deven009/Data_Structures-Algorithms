template <class T>
T inner_product(T *a, T *b, int n)
{
    T result = 0;
    for (int i=0;i<n;i++)
        result += a[i] * b[i];
    return result;
}