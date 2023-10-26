#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("Enter an numbers: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%d+",i);
			sum=sum+i;
	    }
	    i++;
	}
	printf("=%d",sum);
	if(sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}
