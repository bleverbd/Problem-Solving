#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,n1[20000],n2[20000],i,a;
   cin>>n;
   for(i=0;i<n;i++)
   {
        cin>>n1[i]>>n2[i];

   }
   for(i=0;i<n;i++)
   {
        a=abs(n1[i]-n2[i]);

        if((abs(n1[i]-n2[i]))%10==0)
        {
          cout<<a/10<<endl;
        }
        else
        {
        cout<<(a/10)+1<<endl;
        }
   }

   return 0;
}
