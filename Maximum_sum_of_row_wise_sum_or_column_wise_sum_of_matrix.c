#include<stdio.h>
int main()
{
    int a,b,i,j,arr[100][100],s=0,max=0,k,m=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<b;j++)
    {
        s=0;
        for(i=0;i<a;i++)
        {
            s=s+arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    for(i=0;i<a;i++)
    {
        k=0;
        for(j=0;j<b;j++)
        {
            k=k+arr[i][j];
        }
        if(k>m)
        {
            m=k;
        }
    }
    if(m>max)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",max);
    }
    
    
}