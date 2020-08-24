#include <stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int a[n],i,j=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(max<a[i])
       {
           max=a[i];
       }

    }
    for(i=0;i<n;i++)
    {
      if(max==a[i])
      {
          j++;
      }

    }
    printf("%d\n",j);
    return 0;
}
