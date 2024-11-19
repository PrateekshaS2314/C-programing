#include<stdio.h>
int factors(int n1, int n2);
int main()

{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d %d",&n1,&n2);
    printf("GCD:%d",factors(n1,n2));
}
int factors(int n1, int n2)
{
    int gcd,lcm;
    if(n1,n2!=0)
    {
        for(int i=1;i<=n1 && i<=n2;i++)
        {
           if(n1%i==0 && n2%i==0)
           {
             gcd=i;
           }
           //return gcd;
        }
         //lcm=(n1*n2)/gcd;
         return gcd;
    }
    else
    return 0;
}