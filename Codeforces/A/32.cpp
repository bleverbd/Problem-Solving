#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0,v;
    long d;
    cin>>n>>d;
    int a[1000];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
   {

      {v=a[i]-a[j];
        v=abs(v);

        if(v<=d&&i!=j)
        {
        c=c+1;
        }
        }

   }

   }
   cout<<c;

    return 0;



}

