#include <iostream>
using namespace std;
int main()
{
    int n,k,i,j,c=0;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
      cin>>ar[i];

    }
    for(i=0;i<n;i++)
    {
        j=i+1;
      for(j;j<n;j++)
      {
          if(((ar[i]+ar[j])%k)==0)
          {
              c++;
          }
      }

    }
    cout<<c;
    return 0;

}
