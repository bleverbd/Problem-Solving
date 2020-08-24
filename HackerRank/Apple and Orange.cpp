#include <iostream>
using namespace std;
int main()
{
    int s,t,a,b,m,n,i,j,x=0,y=0;
    cin>>s>>t>>a>>b>>m>>n;
    int ap[m],org[n];
    for(i=0;i<m;i++)
    {
        cin>>ap[i];
        ap[i]=ap[i]+a;
        if(ap[i]>=s && ap[i]<=t)
        {

            x++;
        }
    }
    for(j=0;j<n;j++)
    {
        cin>>org[j];
        org[j]=org[j]+b;
        if(org[j]>=s && org[j]<=t)
        {

            y++;
        }
    }
    cout<<x<<endl<<y<<endl;
    return 0;

}
