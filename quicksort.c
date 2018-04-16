#include<stdio.h>
#include<time.h>

void quicksort(int a[50000] , int l , int r)
{
	int i ,j ,key , temp;
	if(l<r)
	{
		key = l;
		i = l;
		j = r;
		while(i<j)
		{
			while((a[i]<=a[key])&&(i<r))
			{
				i++;
			}
			while(a[j]>a[key])
			{
				j--;
			}
			if(i<j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
		temp = a[key];
		a[key] = a[j];
		a[j] = temp;
		quicksort(a,l,j-1);
		quicksort(a,j+1,r);
	}
}

void main()
{
	clock_t start , end;
	int i , n , a[50000];
	double total_time;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int r;
	for(i=0;i<n;i++)
	{
		r = rand();
		a[i] = r;
	}
	start = clock();
	quicksort(a,0,n-1);
	end = clock();
	printf("The elements in sorted order are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	total_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\nTime taken is : %f\n",total_time);
}


