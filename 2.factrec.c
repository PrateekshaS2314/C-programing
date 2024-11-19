#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("Fact:%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n!=0)
    {
        int fact=1;
        for(int i=1;i<=n;i++)
        fact*=i;
        return fact;
    }
    else 
    return 0;
}