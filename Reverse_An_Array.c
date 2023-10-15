#include<stdio.h>

void reverse(int *arr, int n)
{
    for(int i=0; i<(n/2); i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

void display(int *arr, int n)
{
    printf("\nDisplay\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int count = 5;

    printf("\nOriginal String");
    display(arr, count);
    reverse(arr, count);

    printf("\n\nReversed String\n");
    display(arr, count);
    return 0;
}