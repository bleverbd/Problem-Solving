#include <stdio.h>
int main()
{
    int a[100],i,c=0,aa=0,g=0,d=0,e=0;
    for(i=0;;i++){
    scanf("%d",&a[i]);
    c++;
    if(a[i]==4)
    {
        break;
    }
    }
    for(i=0;i<=c-1;i++)
    {
        if(a[i]>0)
        {
            if(a[i]==1)

            {
                aa++;
            }
            else if(a[i]==2)
            {
                g++;
            }
            else if(a[i]==3)
            {
                d++;
            }
            else e++;
        }
    }
    if(e!=0)
    {
        printf("MUITO OBRIGADO\n");
    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",aa,g,d);
    return 0;


}
