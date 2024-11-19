#include<stdio.h>
int main()
{
    int i,j;
    int temp;
    int array[5];
    printf("enter elements:");
    for(i=0;i<5;i++)
    scanf("%d", &array[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
          if(array[i]<array[j])
            {
              temp=array[i];
              array[i]=array[j];
              array[j]=temp;
            }
          
        }
    }
    printf("array after sorting(asc):");
    for(i=0;i<5;i++)
    printf("\n%d",array[i]);
    printf("\narray after sort(dsc): ");
    for(i=4;i>=0;i--)
    {
        printf("\n%d",array[i]);
    }
    return 0;
}