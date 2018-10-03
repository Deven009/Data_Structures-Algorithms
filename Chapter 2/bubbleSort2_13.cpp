template<class T>
bool bubble(T a[], int n)
{// 把 a[0:n-1] 中最大元素移到右边
    bool swapped = false;
    for(int i=0;i<n-1;i++)
        if (a[i]>a[i+1])
        {
            swap(a[i], a[i+1]);
            swapped = true; // 交换 
        }
    return swapped;
}

template<class T>
void bubbleSort(T a[], int n)
{// 及时终止冒泡排序
    for (int i=0;i>1 && bubble(a, i); i--);
}