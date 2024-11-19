#include<stdio.h>
void insertElement(int arr[], int *n, int element, int position){
    for(int i=(*n)++; i>position; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position] = element;
}
int main()
{
    int arr[100], n, element, position;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elements to insert: ");
    scanf("%d", &element);
    printf("enter position to insert: ");
    scanf("%d", &position);
    if(position<0 || position>n)
    {
        printf("Invalid position!\n");
    }
    else{
        insertElement(arr, &n, element, position);
        printf("Array after insertion: ");
        for(int i=0; i<n; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}