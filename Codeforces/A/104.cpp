#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    a=n-10;
    if(a>=2&&a<=9)
    {
    cout<<4;
    }
    else if(a==10)
    {
    cout<<15;
    }
    else if(a==1||a==11)
    {
    cout<<4;
    }
    else
    cout<<0;
    return 0;
}
