#include<stdio.h>
#include<time.h>

void main()
{
	int i,n,arr[50000],key,flag=0,j,temp,r;
	clock_t start,end;
	double timetaken;
	printf("Enter the number of elements to be considered\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		r = rand();
		arr[i] = r;
	}

	printf("Elements before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	start = clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]<arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	end = clock();
	
	printf("Elements after sorting are \n");
	i=0;
	while(i<n)
	{
		printf("%d\n",arr[i++]);
	}
	timetaken = (double)(end - start)/CLOCKS_PER_SEC;
	printf("\n");
	printf("The time taken is %lf\n",timetaken);
}
