#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,i,b=0;
    cin>>a;
    string n;
    for(i=1;i<=a;i++)
    {
      cin>>n;
       if(n=="++X"||n=="X++")
       b=b+1;
       else if(n=="--X"||n=="X--")
       b=b-1;

    }
    cout<<b;

    return 0;
}
