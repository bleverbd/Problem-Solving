#include <stdio.h>
int main()
{
    int n,a,i,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        p=0;
        if(a==1||a==2)
            printf("%d eh primo\n",a);
        else {
        for(j=2;j<a;j++)
        {
            if(a%j==0)
            {
                p=1;
                break;
            }


        }
            if(p==1)
                printf("%d nao eh primo\n",a);
            else
                printf("%d eh primo\n",a);
        }


    }
    return 0;
}
