#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partician(int arr[], int si, int ei)
{
    int pivot = arr[si];
    int i = si + 1;
    int j;

    for (j = si + 1; j <= ei; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }

    swap(&arr[si], &arr[i - 1]);

    return i - 1;
}

void quickSort(int arr[], int si, int ei)
{
    if (si < ei)
    {
        int pivotIndex = partician(arr, si, ei);
        quickSort(arr, si, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, ei);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int n;
    printf("enter the number of element in the array : \n");
    scanf("%d",&n);

    int arr[n];

    printf("enter the array element :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Before Sort Print the Array : \n");
    printArray(arr, 5);
    quickSort(arr, 0, 4);
    printf("After Sort Print the Array : \n");

    printArray(arr, 5);

    return 0;
}
