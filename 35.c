#include<stdio.h>
void main()
{
	int a, b, n;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("1-Addition\n,2-sutraction\n,3-multipication\n,4-division\n");
	printf("Enter a number(1 to 4): ");
	scanf("%d", &n);
	switch(n)
    {
    case 1:
    	printf("%d+%d=%d", a,b,a+b);
    	break;
    case 2:
    	printf("%d-%d=%d", a,b,a-b);
    	break;
    case 3:
    	printf("%d*%d=%d", a,b,a*b);
    	break;
    case 4:
    	printf("%d/%d=%d", a,b,a/b);
    	break;
    	default:
    		printf("Invalid numder");
    	}
}
