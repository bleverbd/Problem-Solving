#include <stdio.h>
int main()
{
    int n,c=0,i;
    float sum=0;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        c++;
        sum=sum+n;

    }
    printf("%0.2f\n",sum/c);
    return 0;
}
