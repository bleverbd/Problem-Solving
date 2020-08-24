#include <stdio.h>
int main()
{
    int nn,p=0,n=0,z=0;
    scanf("%d",&nn);
    int arr[nn],i;
    for(i=0;i<nn;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
            z++;
        else if(arr[i]>0)
            p++;
         else if(arr[i]<0)
            n++;
    }
    printf("%0.6lf\n%0.6lf\n%0.6lf",(double)p/nn,(double)n/nn,(double)z/nn);
    return 0;
}
