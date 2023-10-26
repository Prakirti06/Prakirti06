#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter an number: ");
	scanf("%d", &a);
    
    c=a<<1;
    printf("%d\n", c);
    
    b=a>>1;
    printf("%d", b);
}
