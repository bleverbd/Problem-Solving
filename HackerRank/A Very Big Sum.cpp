#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long int ar[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%ld\n",sum);
    return 0;
}
