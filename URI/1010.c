#include <stdio.h>
int main ()
{
    int n,u,n1,u1;
    float p,p1;
    scanf("%d%d%f%d%d%f",&n,&u,&p,&n1,&u1,&p1);
    printf("VALOR A PAGAR: R$ %0.2f\n",(u*p)+(u1*p1));
    return 0;

}

