#include<stdio.h>
int main()
{
    int n,i,arr[100],c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i++)
    {
        if(arr[i]%2==1)
        {
            c=1;
            printf("%d",i);
            break;
        }
    }
    return 0;
}