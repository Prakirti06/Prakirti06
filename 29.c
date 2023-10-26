#include<stdio.h>
void main()
{
	int u;
	float amt,surcharge;
	printf("Enter an unit: ");
	scanf("%d", &u);
	
	if(u<=50)
	{
		amt=u*0.5;
	}
	else if(u<=150)
	{
		amt=(50*0.5)+(u-50)*0.75;
	}
	else if(u<=250)
	{
		amt=(50*0.5)+(100*0.75)+(u-150)*1.20;
	}
	else
	{
		amt=(50*0.5)+(100*0.75)+(100*1.20)+(u-250)*1.50;
	}
	surcharge=amt+(amt*0.20);
	printf("%f", surcharge);
}
