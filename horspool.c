#include<stdio.h>
#include<string.h>

#define MAX 500

int t[MAX];

void shiftable(char p[])
{
	int i,j,m;
	m = strlen(p);
	for(i=0;i<MAX;i++)
	{
		t[i] = m;
	}
	for(j=0;j<m-1;j++)
	{
		t[p[j]] = m-1-j;
	}
}

int horspool(char text[] , char p[])
{
	int i,j,k,m,n;
	n = strlen(text);
	m = strlen(p);
	printf("Length of text = %d\n",n);
	printf("Length of pattern = %d\n",m);
	i = m-1;
	while(i<n)
	{
		k = 0;
		while((k<m)&&(p[m-1-k] == text[i-k]))
		{
			k++;
		}
		if(k==m)
			return(i-m+1);
		else
			i = i + t[text[i]];
	}
	return -1;
}

void main()
{
	char text[100],p[100];
	int pos;
	printf("Enter the text\n");
	gets(text);
	printf("Enter the pattern\n");
	gets(p);
	shiftable(p);
	pos = horspool(text,p);
	if(pos>=0)
		printf("The pattern starts from position %d\n",pos+1);
	else
		printf("The pattern is not found\n");
}

