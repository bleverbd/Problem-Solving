#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=3;j++)
        {
            if(j==1)
            {
                printf("%d ",i);
            }
            if(j==2){
                printf("%d ",i*i);
            }
            if(j==3){
                printf("%d",i*i*i);
            }

        }
        printf("\n");

    }
    return 0;
}
