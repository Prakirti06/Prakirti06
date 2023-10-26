#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a,&b);
	a=a+1;
	while(a<b)
	{
		if(a%2==0)
		{
			printf("%d", a);
		}
		a++;
	}
}
