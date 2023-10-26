#include<stdio.h>
void main()
{
	int a,b,c,larnum;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	larnum = a>b?((a>c)?a:c):((b>c)?b:c);
    printf("%d", larnum);	
}
