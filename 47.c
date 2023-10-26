#include<stdio.h>
#include<math.h>
void main()
{
	int i=0;
	float root;
	while(i<=9)
	{
		root=sqrt(i);
		printf("%d %f\n", i, root);
		i++;
	}
}
