#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter tne number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	printf("sum=%d", sum);
}
