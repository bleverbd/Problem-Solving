#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,c=0;
    cin>>y>>w;

    if(y>=w)
    {
       for(y;y<=6;y++)
       {
          c++;
       }
       if(c==0)
       {
       cout<<0<<"/"<<1;
       }
       if(c==1)
       {
       cout<<1<<"/"<<6;
       }
       if(c==2)
       {
       cout<<1<<"/"<<3;
       }
       if(c==3)
       {
       cout<<1<<"/"<<2;
       }
       if(c==4)
       {
       cout<<2<<"/"<<3;
       }if(c==5)
       {
       cout<<5<<"/"<<6;
       }
       if(c==6)
       {
       cout<<1<<"/"<<1;
       }

    }
 else
    {
       for(w;w<=6;w++)
       {
          c++;
       }
       if(c==0)
       {
       cout<<0<<"/"<<1;
       }
       if(c==1)
       {
       cout<<1<<"/"<<6;
       }
       if(c==2)
       {
       cout<<1<<"/"<<3;
       }
       if(c==3)
       {
       cout<<1<<"/"<<2;
       }
       if(c==4)
       {
       cout<<2<<"/"<<3;
       }if(c==5)
       {
       cout<<5<<"/"<<6;
       }
       if(c==6)
       {
       cout<<1<<"/"<<1;
       }

    }


    return 0;
}
