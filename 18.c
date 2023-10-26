#include<stdio.h>
void main()
{
	char b;
	printf("Enter an anphabet: ");
	scanf("%c", &b);
	
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
	{
		printf("b is vowel");
	}
	else
	{
		printf("b is consonant");
	}
}
