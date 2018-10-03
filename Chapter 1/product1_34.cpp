template<class T>
T product(T a[], int n)
{// 返回数祖 a[0:n-1] 的累计积
    T theProduct = 1;
    return accumulate(a, a+n, theProduct, multiplies<T>());
}