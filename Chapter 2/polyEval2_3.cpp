template<class T>
T polyEval(T coeff[], int n,const T& x)
{  // 计算 n 阶多项式在点 x 处的值，系数为 coeff[0：n]
    T y = 1, value = coeff[0];
    for(int i=1,i<=n;i++)
    {  // 加上下一项
        y *= x;  // 保存 x 的 n 次方
        value += y * coeff[i];  // 逐项做和
    }
    return value;
}