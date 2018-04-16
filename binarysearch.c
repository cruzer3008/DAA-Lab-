#include<stdio.h>

void main()
{
	int i,n,arr[50],key,flag=0,mid=0,low,high;
	printf("Enter the number of elements to be considered\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the element number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	low = 0;
	high = n;
	printf("Enter the element to be searched for\n");
	scanf("%d",&key);
	while(high>=low)
	{
		mid = (low+high)/2;
		if(arr[mid]==key)
		{
			printf("Element found at postion %d\n",mid+1);
			flag = 1;
		}
		if(arr[mid]<key)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;

		}
	}

	if(flag == 0)
	{
		printf("Element not found\n");
	}
}


	
