#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],s=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==1)
        {
            s=s+pow(2,i);
        }
    }
    printf("%d",s);
    return 0;
}