#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter an integer(a): ");
	scanf("%d", &a);
	
	printf("Enter an integer(b): ");
	scanf("%d", &b);
	
	c=a+b;
	
	a=c-a;
	
	b=c-b;
	
	printf("a= %d", a);
	printf("b= %d", b);
}
