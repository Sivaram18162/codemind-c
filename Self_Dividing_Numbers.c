#include<stdio.h>
int self(int n)
{
    int k=n,d,c=0,dc=0;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        if(k%d==0)
        {
            c++;
        }
        n=n/10;
        dc++;
    }
    if(dc==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)

    {
        if(self(i))
        printf("%d ",i);
    }
}