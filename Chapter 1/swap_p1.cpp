void sqap(int x,int y)
{  // 此处是传值参数，函数并不影响主函数的值
    int temp = x;
    x = y;
    y = temp;
}