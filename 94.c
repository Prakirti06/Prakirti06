#include<stdio.h>
void main()
{   int n;
	scanf("%d", &n);
	int a[n] ,b[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter element into a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
	    printf("Elements in b[%d]: %d\n", i,b[i]);
    }
}
