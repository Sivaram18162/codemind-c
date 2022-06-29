#include<stdio.h>
int main()
{
    int n,d,temp,k=0,i;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           k=k+i; 
        }
    }
    if(temp==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}