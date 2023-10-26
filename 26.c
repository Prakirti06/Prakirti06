#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("character is lower case");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("character is upper case");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("character is digits");
	}
	else
	{
		printf("character is special character");
	}
}
