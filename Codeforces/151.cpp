#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,a,b,ca,m;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=c*d;
    ca=p/np;
    m=(a<b)?((a<ca)?a:ca):((b<ca)?b:ca);
    cout<<m/n;
    return 0;
}
