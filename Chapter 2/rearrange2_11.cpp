template<class T>
void rearrange(T a[], int n, int r[])
{// 原地重排数组元素使之有序
    for(int i=0;i<n;i++)
        // 把正确的元素移到 a[i] 
        while(r[i] != i)
        {
            int t =r[i];
            sqap(a[i], a[t]);
            sqap(r[i], r[t]);
        }
}