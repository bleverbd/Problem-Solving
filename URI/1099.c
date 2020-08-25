#include <stdio.h>
int main()
{
    int n,i,sum,temp;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }

     for(i=0;i<n;i++)

    {
        sum =0;
        if(x[i]>y[i])
        {
            temp=y[i];
            y[i]=x[i];
            x[i]=temp;
        }
        for (x[i]=x[i]+1;x[i]<y[i];x[i]=x[i]+1){
            if(x[i]%2==1)
            {
                sum=sum+x[i];
            }

        }
        printf("%d\n",sum);

    }
   return 0;


}
