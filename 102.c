#include<stdio.h>
void main()
{
	int data[3][3],i,j,cp=0,cn=0,c=0;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	    	printf("Enter array element= ");
	    	scanf("%d",&data[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(data[i][j]>0)
			{
				cp++;
			}
			else if(data[i][j]==0)
			{
				c++;
			}
			else
			{
				cn++;
			}
		}
	}
	printf("Positive no.:%d\n", cp);
	printf("No. of zeros:%d\n", c);
	printf("Negative no.:%d\n", cn);
}
