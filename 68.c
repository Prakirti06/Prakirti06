#include<stdio.h>
void main()
{
	int n,rem,rn=0,on;
	printf("Enter an numbers: ");
	scanf("%d",&n);
	on=n;
	while(n!=0)
	{
		rem=n%10;
		rn=rn*10+rem;
		printf("%d", rem);
		n=n/10;
	}
	if(on==rn)
	{
		printf("\n%d is a palidrome number.",on);
	}
	else
	{
		printf("\n%d is not a palidrome number.",on);
	}
}

