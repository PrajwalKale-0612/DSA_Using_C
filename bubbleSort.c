#include<stdio.h>
void printArray(int arr[],int num)
{
    printf("\n");
    for (int i = 0; i < num-1; i++)
    {
    
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void bubbleSortArray(int arr[],int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main()
{
    int num;
    printf("Enter the Number of Element in the Array :\n");
    scanf("%d",&num);

    // int arr[]={1,2,34,3,4};
    // int size=sizeof(arr)/sizeof(arr[0]);

    int arr[num];

    printf("Enter the Array Element :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nBefore Sort Print the Array :");
    printArray(arr,num);
    bubbleSortArray(arr,num);
    printf("\nAfter Sort Print the Array :");
    printArray(arr,num);


    return 0;
}