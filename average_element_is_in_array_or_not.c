#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,s=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}