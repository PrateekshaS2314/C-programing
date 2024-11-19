#include<stdio.h>
int fibonacci(int n1, int n2);
int main()
{
    int n1, n2;
    printf("enter two numbers: ");
    scanf("\n%d \n%d",&n1,&n2);
    printf("", fibonacci(n1,n2));
}
int fibonacci(int n1, int n2)
{
    int nextterm, i, n=10;
    
    if(n1,n2!=0)
    {
        for(i=3;i<n;i++)
     {
        nextterm=n1+n2;
        printf("\n%d", nextterm);
        n1=n2;
        n2=nextterm;
     }
    }
    else 
    return 0;
}