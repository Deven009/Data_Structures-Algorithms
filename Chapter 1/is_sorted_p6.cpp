template <class T>
bool is_sorted(T *a, int n)
{
    for(int i=1;i<n-1;i++)
        if(!((a[i-1]<=a[i] && a[i]<=a[i+1]) ||(a[i-1]>=a[i] && a[i]>=a[i+1])))
            return false;
    return true;
}