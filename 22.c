#include<stdio.h>
void main()
{
	int num;
	printf("Enter an number: ");
	scanf("%d", &num);
	
	if((num & 1)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
