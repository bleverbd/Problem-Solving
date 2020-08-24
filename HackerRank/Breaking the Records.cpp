#include <iostream>
using namespace std;
int main()
{
    int n,i,max,c=0,m=0,min;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    max=ar[0];
    min=ar[0];
    for(i=1;i<n;i++)
    {
        if(max<ar[i])
        {
            c++;
            max=ar[i];
        }
         if(min>ar[i])
        {
            m++;
            min=ar[i];
        }
    }
    cout<<c<<' '<<m<<endl;
    return 0;

}
