#include<stdio.h>
void main()
{
	int f, C;
	
	printf("Enter an integer: ");
	scanf("%d", &f);
	
	C=(f-32)*5/9;
	
    printf("%d", C);	
}
