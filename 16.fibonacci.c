#include<stdio.h>
int main()
{
    int n1, n2, nextterm, n=10;
    printf("enter two numbers: ");
    scanf("\n%d \n%d",&n1,&n2);
     for(int i=3;i<n;i++)
     {
         nextterm=n1+n2;
         printf("\n%d", nextterm);
         n1=n2;
         n2=nextterm;
     } 
    return 0;
}