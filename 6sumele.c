#include<stdio.h>
int main()
{
    int i, sum=0;
    int array[5];
    printf("enter the elements: ");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    for(i=0;i<5;i++)
    {
        sum+=array[i];
    }
    printf("the sum of elements is: %d", sum);
    return 0;
}