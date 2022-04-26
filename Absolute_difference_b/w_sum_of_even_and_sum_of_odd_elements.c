#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        s1+=arr[i];
        else
        s2+=arr[i];
    }
    printf("%d",(abs)(s1-s2));
}