#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("enter integer:");
    scanf("%d",&n);
    printf("",prime(n));
}
int prime(int n)
{
    int count=0;
    
        if(n<=1)
        {
            printf("enter number other than 0 and 1.");
        }
    if(n != 0)
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d is prime\n",n);
        }
        else
        printf("%d is composite\n",n);
    }
    else
    return 0;
}