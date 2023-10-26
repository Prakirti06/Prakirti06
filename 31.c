#include<stdio.h>
void main()
{
	int s1,s2,s3,ms;
	printf("Enter the sides: ");
	scanf("%d %d %d", &s1, &s2, &s3);
	
	if(s1==s2 && s2==s3)
	{
		printf("Equilateral triangle");
	}
	else if(s1==s2||s2==s3||s3==s1)
	{
		printf("Isosceles triangle");
	}
	else
	{
		printf("Scalene triangle\n");
	}
	s1=ms;
	if(s2>ms)
	{
		ms=s2;
    }
    else if(s3>ms)
    {
    	ms=s3;
	}
	if(ms*ms==s1*s1+(s2*s2)||ms*ms==s2*s2+s3*s3||ms*ms==s3*s3+s1*s1)
	{
		printf("Right angle triangle");
	}		
}
