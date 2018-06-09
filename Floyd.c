#include<stdio.h>

int min(int a , int b)
{
	if(a<=b) return a;
	else return b;
}

void main()
{
	int n,i,j,k;
	printf("Enter the order of the matrix\n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the weight matrix . Enter 100 if no connection exists\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(k=1;k<=n;k++)
	{	
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}

	printf("The minimum distance matrix is\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

