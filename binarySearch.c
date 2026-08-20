#include<stdio.h>
int binarySearchInArray(int arr[],int sp,int ep,int sval)
{
    int mid;
    while (sp<=ep)
    {
        mid=(sp+ep)/2;
        if (arr[mid]==sval)
        {
            return mid;
        }
        else if (arr[mid]>sval)
        {
            ep=mid-1;
        }
        else
        {
            sp=mid+1;
        }
    }
    return -1;
}
int main()
{
    int num;
    printf("Enter the Num of Element store in the array :\n");
    scanf("%d",&num);
    int arr[num];

    printf("\nEnter the Array Element :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrint the Array Element :\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    int sval;
    printf("\nEnter the Search Value in the Array :\n");
    scanf("%d",&sval);

    int res;
    res=binarySearchInArray(arr,0,num-1,sval);

    if (res==-1)
    {
        printf("%d is not found in the array\n",sval);
    }
    else
    {
        printf("%d is  found at index %d\n",sval,res);
    }
    return 0;
}