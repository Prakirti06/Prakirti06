#include<stdio.h>
void main()
{
	int a,b,c,largest_num;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	largest_num= a>b?1:2;
	switch(largest_num)
	{
    case 1:
    printf("%d*%d=%d", a,b,a*c);
    break;
    case 2:
    printf("%d*%d=%d", b,c,b*c);
    break;
    default:
    printf("invalid no.");
    }
}
