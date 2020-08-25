#include <stdio.h>
int main()
{
    int x,i,y,sum=0,temp;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        temp=y;
        y=x;
        x=temp;
    }
    for(i=x;i<=y;i++)
    { if(i%13==0)
    {

    }
    else
        {
        sum=sum+i;
    }

    }



    printf("%d\n",sum);
    return 0;
}
