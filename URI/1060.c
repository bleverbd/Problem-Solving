#include <stdio.h>
int main()
{
    double a[6];
    int i,c=0;
    for(i=0;i<6;i++)
        {
            scanf("%lf",&a[i]);
            if(a[i]>0)
            {
                c++;
            }
    }
    printf("%d valores positivos\n",c);
    return 0;




}
