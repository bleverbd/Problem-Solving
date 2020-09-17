#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,m,c=0,mi;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    m=a[0];
    mi=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>m)
        {
        m=a[i];
        c++;
        }
        else if(a[i]<mi)
        {
        mi=a[i];
        c++;
        }

    }
   cout<<c;
    return 0;


}
