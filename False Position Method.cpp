//False Position Method
#include <iostream>
using namespace std;
double fun(double x)
{

    return (x*x+x-2);
}
int main() {
    int k=1;
    double a=-3.0,b=0.0,c;
    while(1)
    {
        c=a-((fun(a)*(b-a))/(fun(b)-fun(a)));
        if (abs(fun(a)*fun(c))<0.000001)
            {
            cout<<"a="<<a<<"\t\t"<<"b="<<b<<"\t\t"<<"c="<<c<<"\t\t"<<"f(c)="<<fun(c)<<endl;
            cout<<"\nRoots is="<<c<<endl;
            cout<<"ITERATIONS="<<k<<endl;
            break;
            }
        if(fun(a)*fun(c)<0)
            {
            cout<<"a="<<a<<"\t\t"<<"b="<<b<<"\t\t"<<"c="<<c<<"\t\t"<<"f(c)="<<fun(c)<<endl;
            b=c;
            }
        else if(fun(b)*fun(c)<0)
            {
            cout<<"a="<<a<<"\t\t"<<"b="<<b<<"\t\t"<<"c="<<c<<"\t\t"<<"f(c)="<<fun(c)<<endl;
            a=c;
            }
        k++;
    }
    return 0;



}

