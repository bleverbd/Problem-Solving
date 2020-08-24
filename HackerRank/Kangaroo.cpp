#include <iostream>
using namespace std;
int main()
{
    int x1,v1,x2,v2,y;
    double y1;
    cin>>x1>>v1>>x2>>v2;
    if((x2>x1&&v2>v1)||v2==v1||x2==x1)
        cout<<"NO"<<endl;
        else
        {
            y=(x1-x2)/(v2-v1);
            y1=((double)x1-(double)x2)/((double)v2-(double)v1);
            if(y==0)
            {
                cout<<"NO"<<endl;
            }
            else if((y1-(double)y)==0)
            {
                 cout<<"YES"<<endl;
            }

            else
                cout<<"NO"<<endl;

        }
    return 0;

}
