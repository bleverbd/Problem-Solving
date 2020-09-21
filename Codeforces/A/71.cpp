#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c;
    cin>>n;
    string ch;

    for(i=0;i<n;i++)
    {
    cin>>ch;
    c=ch.length();
    if(c>10)
    {
    cout<<ch[0]<<c-2<<ch[c-1]<<endl;
    }
    else cout<<ch<<endl;
    }

    return 0;

}
