#include<stdio.h>
int main()
{
    int i;
    int array[5];
    printf("Enter the elements: ");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    for(i=1;i<5;i++)
    {
    if(array[0]<array[i])
    {
        array[0]=array[i];
    }
    }
    printf("Largest number: %d\n", array[0]);
    for(i=0;i<5;i++)
    {
        if(array[0]>array[i])
        {
            array[0]=array[i];
        }
    }
    printf("smallest number: %d", array[0]);
    return 0;
}