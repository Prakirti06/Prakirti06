#include<stdio.h>
void main()
{
	int a, b, c, choice;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("1.Addition\n, 2.Subtraction\n, 3.multipication\n, 4.Division ");
	scanf("%d", &choice);
	
	if(choice==1)
	{
		c=a+b;
		printf("%d", c);
	}
	else if(choice==2)
	{
		c=a-b;
		printf("%d", c);
	}
	else if(choice==3)
	{
		c=a*b;
		printf("%d", c);
	}
	else
	{
		c=a/b;
		printf("%d", c);
	}
}
