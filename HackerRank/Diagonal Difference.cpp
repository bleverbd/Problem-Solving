 #include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n][n],s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
            if(i==j)
            {
                s1=s1+ar[i][j];
            }
            if(i+j==(n-1))
            {
                s2=s2+ar[i][j];
            }
        }
    }
printf("%d",abs(s1-s2));
return 0;

}
