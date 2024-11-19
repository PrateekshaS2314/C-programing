#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:\n");
    scanf("%d", &size);
    int matrix[size][size];
    printf("enter the elements: \n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the square matrix is:\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}