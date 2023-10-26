#include<stdio.h>
void main()
{
	int n,ans=1,i=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		ans=ans*i;
		i++;
	}
	printf("%d", ans);
}
