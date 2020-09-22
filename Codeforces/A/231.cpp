#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,l=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
     cin>>a>>b>>c;
     if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
     l++;
     }


    cout<<l;
    return 0;

}
