#include<stdio.h>
void main()
{
	int n,fd,ld,sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("%d", sum);
}
