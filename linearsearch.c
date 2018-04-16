#include<stdio.h>
#include<time.h>


void main()
{
	clock_t start , end;
	double timetaken;
	int i,n,arr[50000],key,flag=0;
	printf("Enter the number of elements to be considered\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		arr[i] = rand();
	}

	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}

	printf("Enter the element to be searched for\n");
	scanf("%d",&key);
	start = clock();
	for(i=0;i<n;i++)
	{	if(arr[i]==key)
		{
			flag = 1;
			printf("Element %d found at position %d\n",key,i+1);
			
		}
		
	}
	
	end = clock();
	if(flag==0)
	{
		printf("Element not found\n");
	}
	timetaken = (double)(end - start)/CLOCKS_PER_SEC;
	printf("\n");
	printf("The time taken is %lf\n",timetaken);
	
	
}
