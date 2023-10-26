#include<stdio.h>
void main()
{
	int n,temp,rem,result=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		result+=rem*rem*rem;
		n=n/10;
	}
	if(temp==result)
	{
		printf("%d is an armstrong number.",temp);
	}
	else
	{
		printf("%d is not an armstrong number.",temp);
	}
}
