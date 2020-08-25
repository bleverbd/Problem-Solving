#include <stdio.h>
int main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=3;j++)
        {
            printf("%d ",c);
            c++;
        }
        printf("PUM\n");
        c++;
    }
    return 0;
}
