template<class T>
void bubble(T a[], int n)
{// 把 a[0:n-1] 中最大元素移到右边
    for(int i=0;i< n-1;i++)
        if(a[i]> a[i+1])
            swap(a[i], a[i+1]);
}