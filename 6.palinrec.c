#include<stdio.h>
int palindrome(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("",palindrome(n));
    return 0;
}
int palindrome(int n)
{
    int reversed=0,remainder,original;
    original=n;
    while(n!=0)
    {
        remainder= n%10;
    reversed= reversed*10+remainder;
    n/=10;
    }    
    if(original == reversed)
    {
        printf("%d is a palindrome", original);
    }
    else
    {
        printf("%d is not a pallindrome", original);
    }
    return 0;
}