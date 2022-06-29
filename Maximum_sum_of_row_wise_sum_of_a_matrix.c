#include<stdio.h>
int main()
{
    int a,b,i,j,arr[100][100],s=0,max=0;
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
        s=0;
        for(j=0;j<b;j++)
        {
            s=s+arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
        
    }
    printf("%d",max);
    
}