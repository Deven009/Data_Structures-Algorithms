template<class T>
T horner(T coeff[], int n, const T& x)
{  // 计算 n 阶多项式在点 x 处的值，系数为 coeff[0：n]
    T value = coeff[n];
    for(int i=1,i<=n;i++)
        value = value * x + coeff[n-i];
    return value;
}