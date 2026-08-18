#include<stdio.h>
int main()
{
	int size;
	printf("Enter the How many element store in the array :\n");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter the Array Element :\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int largest=0,seclargest=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>largest)
		{
			seclargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>seclargest && arr[i]<largest)
		{
			seclargest=arr[i];
		}
	}
	printf("%d is the second largest element in the array \n",seclargest);
	return 0;
}
