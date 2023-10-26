#include<stdio.h>
void main()
{
	int n,sum=0,avg,count=0;
	printf("Enter a number: ");
	while(1)
	{
		scanf("%d", &n);
		if(n==0)
		{
			break;
		}
		sum=sum+n;
		count++;
	}
	printf("sum= %d\n", sum);
	avg=sum/count;
	printf("avg= %d", avg);
}
