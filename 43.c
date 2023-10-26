#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d", i);
		}
		i++;
	}
}
