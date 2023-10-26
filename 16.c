#include<stdio.h>
void main()
{
	int a, b;
	printf("Enter an interger: ");
	scanf("%d", &a);
	
	printf("Enter an integer: ");
	scanf("%d", &b);
	
	if(a>b)
	{
		printf("a is largest");
	}
	else
	{
		printf("b is largest");
	}
}
