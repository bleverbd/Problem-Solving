//Bisection Method
#include <iostream>
using namespace std;
double fun(double x)
{

    return (x*x+x-2);
}
int main() {
    int k=1;
    double a=5,b=-5,c;
    while(1)
    {
        c=(a+b)/2;
        if (abs(fun(a)*fun(c))<0.0000000001)
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

