template<class T>
int rsequentialSearch(T a[], int n,const T& x)
{  // 递归形式
   // 在数组 a[0:n-1] 中查找元素 x
   // 如果找到，则返回该元素的位置，否则返回 -1
    if (n<1)
        return -1;
    if (a[n-1]==x)  // 从最后一个开始找
        return n-1;
    return rsequentialSearch(a,n-1,x); // 去掉最后一个接着找
}
