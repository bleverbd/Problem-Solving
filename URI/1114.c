#include <stdio.h>
int main()
{
    int i,a[100],c=0;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==2002)
        {
            break;
        }
        c++;
    }
     for(i=0;i<=c;i++)
    {
        if(a[i]==2002)
        {
            printf("Acesso Permitido\n");
        }
        else printf("Senha Invalida\n");

    }
    return 0;


}
