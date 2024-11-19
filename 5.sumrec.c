#include<stdio.h>
int sum(int n1, int n2);
int main()
{
    int n1, n2;
    printf("enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Sum=%d",sum(n1,n2));
    return 0;
}
int sum(int n1, int n2)
{
    if(n1,n2!=0)
    {
        return n1+n2;
    }
    else
    return 0;
}