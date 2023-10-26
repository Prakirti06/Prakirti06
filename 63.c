#include<stdio.h>
void main()
{
	int n,count=0,i=2;
	printf("Enter an numbers: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count=count+1;
		}
		i++;
	}
	if(count==0)
	{
		printf("It is a prime number. ");
	}
	else
	{
		printf("It is not a prime number.");
	}
}
