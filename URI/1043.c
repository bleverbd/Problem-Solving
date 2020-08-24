#include <stdio.h>
int main ()
{
    double a,b,c,p,area;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if((a+b)>c&&(a+c)>b&&(b+c)>a)
        {
            p=a+b+c;
            printf("Perimetro = %0.1lf\n",p);
        }
        else
            {

                area=((a+b)/2)*c;
                printf("Area = %0.1lf\n",area);



        }
    }
}
