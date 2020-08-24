#include <stdio.h>
int main()
{
    int p,a=0,b=1,c,i;
    scanf("%d",&p);
    if(p==0)
    {
        printf("0");
    }
    else printf("0");
    for(i=2;i<=p;i++)
    {
        c=a+b;
        printf(" %d",b);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;

}
