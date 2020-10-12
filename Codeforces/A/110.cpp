#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,p=0;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++)
    {
       if(s[i]=='4'||s[i]=='7')
         {
        p++;
         }
    }

    if(p==4||p==7) cout<<"YES";
    else cout<<"NO";

    return 0;

}
