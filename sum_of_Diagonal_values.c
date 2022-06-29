#include<stdio.h>
int main()
{
    int a,b,c=0,n,arr[100][100],i,j;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j || j==a-i-1)
            {
                c=c+arr[i][j];
            }
        }
    }
    printf("%d",c);
}