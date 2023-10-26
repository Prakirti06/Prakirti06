#include<stdio.h>
void main()
{
	int Y, W, D, day;
	printf("Enter an days: ");
	scanf("%d", &D);
	
	Y=D/365;
	D=D%365;
	W=D/7;
	D=D%7;
	
	printf("%d:%d:%d", Y, W, D);
}
