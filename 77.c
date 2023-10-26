#include<stdio.h>
void main()
{
	int n,s=1,f=0,i,nt;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",f);
		nt=f+s;
		f=s;
		s=nt;
	}
}
