#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d[100],i,j,a,b,sum=0;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        cin>>d[i];
    }

    cin>>a>>b;
    for(i=a;i<b;i++)
    {
        sum=sum+d[i];

    }
    cout<<sum;
    return 0;

}
