#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,D,root1,root2;
	printf("Enter a number: ");
	scanf("%d %d %d", &a, &b, &c);
	D=b*(b-4*a*c);
	
	if(D>0)
	{
		root1=(-b+sqrt(D))/(2*a);
		root2=(-b-(sqrt(D)))/(2*a);
		printf("%d %d", root1, root2);
	}
	else if(D=0)
	{
		root1=root2=(-b)/(2*a);
		printf("%d", root1);
    }
    else 
    {
    	root1=(-b+sqrt(D))/(2*a);
    	root2=(-b-(sqrt(D)))/(2*a);
    	printf("%d %d", root1, root2);
	}
}
