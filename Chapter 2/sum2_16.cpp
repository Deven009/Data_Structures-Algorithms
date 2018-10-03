template<class T>
T sum(T a[], int n)
{// 返回数组元素 a[0:n-1] 的和       
    T theSum = 0;  
    stepCount++;           // theSum = 0 是一个程序步
    for(int i=0;i<n;i++)
    {
        stepCount++;       // for 循环的每一次条例判断是一个程序步
        theSum += a[i];
        stepCount++;       // theSum += a[i] 是一个程序步
    }
    stepCount++;           // for 循环语句的最后一次条件判断是一个程序步
    stepCount++;           // return theSum 是一个程序步
    return theSum;
}