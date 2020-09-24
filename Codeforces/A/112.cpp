#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,l1,i;
    string s,s1;
    cin>>s>>s1;
    l=s.length();
    l1=s1.length();
    for(i=0;i<l;i++)
    {
     if(int(s[i])>=65 && int(s[i])<=90)
     {
     s[i]=int(s[i])+32;
     }
    }
    for(i=0;i<l1;i++)
    {
     if(int(s1[i])>=65 && int(s1[i])<=90)
     {
     s1[i]=int(s1[i])+32;
     }
    }
    if(s<s1) cout<<"-1";
    else if(s>s1)  cout<<"1";
    else cout<<"0";


    return 0;


}
