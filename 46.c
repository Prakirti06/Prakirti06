#include<stdio.h>
void main()
{
	int n,count=0,i=1;
	printf("Enter 10 numbers: ");
	while(i<=10)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			count=count+1;
		}
	    i++;
	}
	printf("evencount=%d\n", count);
	printf("oddcount=%d", 10-count);
}
