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
		printf("%d", rem);
		n=n/10;
	}
}
