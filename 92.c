#include<stdio.h>
void main()
{
	int num[100],i,n;
	printf("Enter number of array elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements: ");
		scanf("%d",&num[i]);
	}
    for(i=n-1;i>=0;i--)
    {
		printf("%d\n", num[i]);
	}
}
