template <class T>
void fill(T *a, T value, int start, int end)
{
    for(;start<end;start++)
        a[start] = value;
}