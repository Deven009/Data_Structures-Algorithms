template<class T>
void insert(T a[], int& n, const T& x)
{// 把 x 插入有序数组 a[0:n-1]
 // 假设数组 a 的容量大于 n
    int i;
    for(i=n-1;i>=0; && x<a[i];i--)
        a[i+1] = a[i];
    a[i+1] = x;
    n++;  // 数组 a 多了一个元素
}