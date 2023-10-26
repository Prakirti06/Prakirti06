#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter an integer: ");
	scanf("%d", &a);
	
	printf("Enter an integer: ");
	scanf("%d", &b);
	
	printf("Enter an integer: ");
	scanf("%d", &c);
	
	if(a>c)
	{
		if(a>b)
		{
			printf("a is largest");
		}
		
		else
		{
		   printf("b is largest");	
		}
	}
	    else
	    {
	    	if(b>c)
	    	{
	    		printf("b is largest");
			}
			
			else
			{
				printf("c is largest");
			}
		}
}

