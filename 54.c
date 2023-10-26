#include<stdio.h>
void main()
{
	int x,y,i=1,pow=1;
	printf("Enter two numbers: ");
	scanf("%d %d", &x,&y);
	while(i<=y)
	{
		pow=pow*x;	
		i++;
	}
	printf("%d", pow);
}
