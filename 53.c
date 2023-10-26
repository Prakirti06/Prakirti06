#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter tne number: ");
	scanf("%d", &n);
	while(i<=10)
	{
		printf("\n%d*%d=%d", n,i,n*i);
		i++;
	}
}
