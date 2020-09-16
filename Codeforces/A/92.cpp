#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n,m,i=1;
        cin>>n>>m;
        while(1)
        {
        if(i>n)
        {
        i=1;
        }
        m=m-i;
        if(m==0)
        {
        cout<<m;
        break;
        }
        if(m<0)
        {
        cout<<m+i;
        break;
        }
        i++;

        }
        return 0;


}
