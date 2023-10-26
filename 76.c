#include<stdio.h>
void main()
{
	int n,ans=1,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	printf("%d", ans);
}
