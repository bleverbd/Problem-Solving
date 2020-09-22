#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100],l,c=0,i;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
     cin>>a[i];
     l=a[k-1];
    }
      for(i=0;i<n;i++)
    {
     if(a[i]>0&&a[i]>=l)
     {
     c++;
     }
    }



    cout<<c;
    return 0;

}
