#include <stdio.h>
int main()
{
    int i,j=1;
    double s=0;
    for(i=1;i<=39;i=i+2)
    {
        s=s+(double)i/j;
        j=j+j;

    }
    printf("%0.2lf\n",s);
    return 0;
}
