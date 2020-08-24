#include <stdio.h>
int main()
{
    int n,x,y,sum=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0) x++;
        sum=0;
        for(j=1;j<=y;j++)
        {
            sum=sum+x;
            x=x+2;

        }
        printf("%d\n",sum);
    }
    return 0;
}
