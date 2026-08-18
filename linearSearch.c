#include<stdio.h>
#include<stdlib.h>
int main()
{
	
    int size,num;
    printf("enter the size of Array :\n");
    scanf("%d",&size);
    

    int arr[size];

    printf("Enter the Array Element :\n");
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nPrint The array Element :\n");

    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the Search Element in the array :\n");
    scanf("%d",&num);


    int i=0;

    while (i<size)
    {
        if (arr[i]==num)
        {
            printf("\n%d at index %d\n",num,i);
            exit(0);
        }
        i++;
    }

    if (i==size)
    {
        printf("%d is not found in the array \n",num);
    }

	return 0;
}
