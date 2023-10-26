#include<stdio.h>
void main()
{
	int R,G,B;
	float Wh,Cy,Mg,Ye,Bl,R1,G1,B1;
	printf("Enter three integer value(0 to 255): ");
	scanf("%d %d %d", &R,&G,&B);
	R1=R/255;
	G1=G/255;
	B1=B/255;
	if(R1>B1 && B1>G1)
	{
		Wh=R1;
	}
	else if(B1>R1 && R1>G1)
	{
		Wh=B1;
	}
	else
	{
		Wh=G1;
	}
	printf("%f\n", Wh);
	
	Cy=(Wh-R1)/Wh;
	printf("%f\n", Cy);
	Mg=(Wh-G1)/Wh;
	printf("%f\n", Mg);
	Ye=(Wh-B1)/Wh;
	printf("%f\n", Ye);
	Bl=1-Wh;
	printf("%f", Bl);
}
