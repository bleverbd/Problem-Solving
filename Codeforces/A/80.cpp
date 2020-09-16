#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,m,p,i,j;
        cin>>n>>m;

        for(j=n+1;j<=m;j++)
        {

        for(i=2;i<j;i++)
        {
        p=0;
        if(j%i==0)
        {
            p=1;
            break;
        }
        }
        if(p==0)
        {
        if(j==m)
        {
            cout<<"YES";
            break;
        }
        else
        {
        cout<<"NO";
        break;
        }
        }
        if(p==1&&j==m)
        {
        cout<<"NO";
        }
        }

     return 0;


}
