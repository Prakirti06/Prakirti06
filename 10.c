#include<stdio.h>
void main()
{
	int S,H,M,sec;
	printf("Enter seconds: ");
	scanf("%d", &sec);
	 
	 H=sec/3600;
	 M=(sec-H*3600)/60;
	 S=sec%60;
	 
    printf("%d:%d:%d", H, M, S);	 
}
