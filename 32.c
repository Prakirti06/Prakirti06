#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b)
	{
        if(b>c)
        {
        	a>b>c;
        	printf("second largest no.:%d",b);
		}
		else if(a>c)
		{
			a>c>b;
			printf("second largest no.:%d",c);
		}
		else
		{
			c>a>b;
			printf("second largest no.:%d",a);
		}
	}
	else if(b>a)
		{
			if(c>b)
			c>b>a;
			printf("second largest no.:%d",b);
		}
		else if(a>c)
		{
			b>a>c;
			printf("second largest no.:%d",a);	
		}
		else
		{
			b>c>c;
			printf("second largest no.:%d",c);
		}
	}
