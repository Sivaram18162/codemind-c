#include<stdio.h>
int main()
{
    int i,n,arr[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(n%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    if(n%2==1)
    {
        for(i=n-1;i>=n-1;i--)
        {
            arr[i+1]=arr[i];
            arr[n]=0;
        }
        for(i=0;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}