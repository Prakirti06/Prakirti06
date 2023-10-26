#include<stdio.h>
void main()
{
	int n,i,j,s,term;
	s=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		term=0;
		for(j=1;j<=i;j++)
		{
			term=term+j;
		}
		s=s+term;
	}
	  printf("sum=%d", s);
}
