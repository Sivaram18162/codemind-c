#include<stdio.h>
int main()
{
    int n;
    float i,sum=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=1/i;
        sum=sum+t;
    }
    printf("%.2f",sum);
    return 0;
}