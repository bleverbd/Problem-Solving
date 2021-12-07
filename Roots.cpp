#include<bits/stdc++.h>
using namespace std;
double fun(double x,double a,double b,double c)
{
    return a*x*x+b*x+c;
}
double derivfun(double x,double a,double b)
{
    return 2*a*x+b;
}


int main(){
    double x1=0,x2,p,e,a,b,c,d;
    int k=1;
    cout<<"Please Enter Quadratic Equation for  Value a,b,c\n";
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;




    while(1)
    {
        x2=x1-(fun(x1,a,b,c)/derivfun(x1,a,b));
        p=x2-x1;
        if(p>=0&&p<0.00000000001)
        {
       cout<<"Roots is="<<x2<<"\n"<<k<<endl;
        break;
        }
    else
        {
        x1=x2;
         cout<<"x1="<<x1<<"\t\t"<<"x2="<<x2<<endl;
        }
    k++;
    }
    return 0;





}
