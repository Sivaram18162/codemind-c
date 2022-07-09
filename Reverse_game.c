#include<stdio.h>
int main()
{
    int n,i,arr[100],rev=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        printf("%d ",rev);
    }
}