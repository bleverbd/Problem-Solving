#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,a,c1,c2;
    cin>>m>>n>>a;
    c1=m/a;
    c2=n/a;
    if(m%a!=0)
    {
    c1++;

    }
    if(n%a!=0)
    {
    c2++;

    }
    cout<<c1*c2;
    return 0;



    }
