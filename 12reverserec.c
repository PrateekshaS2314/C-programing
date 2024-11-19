#include<stdio.h>
#include<string.h>
int reverse(char n);
int main()

{
    char n[20];
    printf("enter the string:");
    scanf("%s",n);
    printf("reversed sting is:%s",reverse(n));
}
int reverse(char n)
{
    if(n!=0)
    {
        printf("%s",strrev(n));
        return n;
    }
    else
    return 0;
}
