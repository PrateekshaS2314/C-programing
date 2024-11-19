#include<stdio.h>
int main()
{
    int i,j,k;
    int array[5];
    printf("enter ele:");
    for(i=0;i<5;i++)
    scanf("%d",&array[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<5;k++)
                {
                    array[k]==array[k+1];
                }
                j--;
            } 
        }
    }
    printf("array after:");
    printf("%d", array[i]);
    return 0;
}

