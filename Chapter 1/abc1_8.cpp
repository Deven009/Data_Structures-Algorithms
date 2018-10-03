int abc(int a, int b, int c)
{
    if(a<=0||b<=0||c<=0)
        throw "All parameters should be > 0";
    return a + b * c;
}