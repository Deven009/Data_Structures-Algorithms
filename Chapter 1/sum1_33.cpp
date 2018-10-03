template<class T>
T sum(T a[], int n)
{// 返回数祖 a[0:n-1] 的累积和
    T theSum = 0;
    return accumulate(a, a+n, theSum);
}