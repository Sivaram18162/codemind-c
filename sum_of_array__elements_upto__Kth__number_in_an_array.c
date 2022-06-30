#include<stdio.h>
int main()
{
    int i,n,arr[100],k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
            s=s+arr[i];
        if(i==k-1)
        {
            break;
        }
    }
    printf("%d",s);
}