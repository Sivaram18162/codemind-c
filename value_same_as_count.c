#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            k++;
            arr[i]=0;
        }
    }
    printf("%d",k);
    return 0;
}