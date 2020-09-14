#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    int a[1000],b[1000];
    for(i=0;i<n;i++)//input
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)//sub
    {
      if(i==(n-1))
      {
      b[i]=abs(a[i]-a[0]);
      }
      else
      {

     b[i]=abs(a[i]-a[i+1]);
     }

      }
      m=b[0];
       for(i=0;i<n;i++)//smaill
       {
       if(m>b[i])
       {
        m=b[i];
       }
       }

       for(i=0;i<n;i++)//position
       {
            if(m==b[i])
       {

            if(i==(n-1))
       {
            cout<<(i+1)<<' '<<1;

       }
       else
       {

        cout<<(i+1)<<' '<<(i+2);

        }
        break;
       }
       }

    return 0;

}
