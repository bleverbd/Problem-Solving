#include <stdio.h>
int main()
{
    int x,y,sum=0,c=0;
    scanf("%d%d",&x,&y);
    while(y<=x)
    {
        scanf("%d",&y);
    }
    while(sum<y)
    {
        sum=sum+x;
        x++;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
