#include<stdio.h>
void main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	(c=='a' || c=='z')?printf("ALPHABET"):("NOT ALPHABET");
}
