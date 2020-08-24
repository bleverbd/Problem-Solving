#include <stdio.h>

int main()
{
    int i,j,k=1,l=11;
    double sum=0.0,m[12][12];
    char ch[2];
    scanf("%s",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);

        }
        }
        for(i=0;i<5;i++)
    {

        for(j=k;j<l;j++)
        {
                sum=sum+m[i][j];
            }
            k++;
            l--;
    }
    if(ch[0]=='S')
        printf("%0.1lf\n",sum);
    else if (ch[0]=='M')
        printf("%0.1lf\n",sum/30.0);

    return 0;
}
