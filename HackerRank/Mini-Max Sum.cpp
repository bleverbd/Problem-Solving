#include <stdio.h>
int main()
{
    long int ar[5],i,j,b[5],x=0,sum=0,max,min;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&ar[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        if(j==x)
        {

        }
        else
        {
            sum=sum+ar[j];
        }
        }
        x++;
        b[i]=sum;
        sum=0;
    }
    max=b[0];
    min=b[0];
    for(i=1;i<5;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
        if(min>b[i])
        {
            min=b[i];
        }

    }
    printf("%ld %ld",min,max);
    return 0;
}
