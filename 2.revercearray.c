#include<stdio.h>
int main()
{
    int i;
    int array[3];
    printf("Enter 3 numbers:");
    for(i=0;i<3;i++)
    scanf("%d",&array[i]); 
    printf("array:");
    for(i=2;i>=0;i--)
    {
            printf("%d",array[i]);
    }
    return 0;
}