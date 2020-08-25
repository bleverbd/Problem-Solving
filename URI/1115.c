#include <stdio.h>
int main()
{


    int x[100],y[100],i,c=0;
    for(i=0;;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
        if(x[i]==0||y[i]==0)
        {
             break;
        }
        c++;

    }

     for(i=0;i<c;i++)

    {

        if(x[i]>0&&y[i]>0)
        {
        printf("primeiro\n");
        }
        if(x[i]<0&&y[i]<0)
        {
        printf("terceiro\n");
        }
        if(x[i]<0&&y[i]>0)
        {
        printf("segundo\n");

        }
        if(x[i]>0&&y[i]<0)
        {
        printf("quarto\n");

        }




    }
   return 0;


}
