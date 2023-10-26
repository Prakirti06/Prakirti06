#include<stdio.h>
int main()
{
	float HRA, DA, BS, GS;
	printf("Enter BS: ");
	scanf("%f", &BS);
	
	if(BS>=10000)
	{
		HRA=BS*0.20;
		DA=BS*0.80;
	}
	else if(BS>=20000)
	{
		HRA=BS*0.25;
		DA=BS*0.90;
	}
	else if(BS>=30000)
	{
		HRA=BS*0.30;
		DA=BS*0.95;
	}
	GS=BS+HRA+DA;
	printf("%f", GS);
	return 0;
}
