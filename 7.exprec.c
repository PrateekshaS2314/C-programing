#include<stdio.h>
int expo(int base, int exp);
int main()
{
    int base, exp;
    printf("enter base:");
    scanf("%d", &base);
    printf("enter power:");
    scanf("%d", &exp);
    printf("answer:%d",expo(base,exp));
}
int expo(int base, int exp)
{
    int result=1;
    while(exp!=0)
    {
        result*=base;
        exp--;
    }
    if(result!=0)
    {
        return result;
    }
    else
    return 0;
}