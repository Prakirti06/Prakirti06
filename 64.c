#include<stdio.h>
void main()
{
	int n,i=1,rem,rm=0;
	printf("Enter an numbers: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rm=rm*10+rem;
		n=n/10;
	}
	
	while(rm!=0)
	{
		rem=rm%10;
		printf("%d\n", rem);
		rm=rm/10;
	}
	
}
