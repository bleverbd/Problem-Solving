#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float x[n],y[n];
    float d;
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }

     for(i=0;i<n;i++)

    {

        if(y[i]==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {d=x[i]/y[i];
         printf("%0.1f\n",d);
        }


        }



   return 0;


}
