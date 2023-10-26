#include<stdio.h>
void main()
{
	int a, lastdigit;
	printf("Enter a number: ");
	scanf("%d", &a);
	lastdigit=a%10;
	
	if(lastdigit%2==0)
	{
		printf("last digit is even");
	}
	else 
	{
		printf("last digit is odd");
	}
}
