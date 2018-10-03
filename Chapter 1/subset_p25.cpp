#include<iostream>
using namespace std;

void subset(int *p1, int *p2, int nlen)
{
    int k = nlen;
    while (k>=1)
        if (p1[k-1]==1)
            k--;
        else
            break;
    if(k>=1)
    {
        cout << "{ ";
        for(int i=0;i<nlen;i++)
        {
            if(p1[i]==1)
                cout<<p2[i]<<" ";
        }
        cout << "}" << endl;

        p1[k-1] = 1;
        for(int i=k;i<nlen;i++)
            p1[i] = 0;

        subset(p1, p2, nlen);
    }
    else
    {
        cout << "{ ";
        for(int i=0;i<nlen;i++)
            cout<<p2[i]<<" ";
        cout << "}" << endl; 
    }

}

int main()
{
    int n;
    cout << "Please input the number of the set->";
    cin >> n;

    int *p1 = new int[n];
    int *p2 = new int[n];

    for(int i=0;i<n;i++)
        p1[i] = 0;
    
    for(int i=0;i<n;i++)
        p2[i] = i + 1;
    
    subset(p1, p2, n);

    delete []p1;
    delete []p2;

    return 0;
}