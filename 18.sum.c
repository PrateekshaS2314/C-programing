#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n!=0)
    {
        for(int i=0;i<=n;i++)
        sum+=i;
        printf("Sum=%d", sum);
    }
    else
    return 0;
}