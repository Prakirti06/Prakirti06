#include<stdio.h>
void main()
{
	int n,i=1,rem=0,ans;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n!=0)
	{
		ans=n%10;
		rem=rem*10+ans;
		n=n/10;
	}
	printf("%d\n",rem);
    while(rem!=0)
    {
    	n=rem%10;
    	if(n==0)
    	{
    		printf("ZERO");
		}
		else if(n==1)
    	{
    		printf("ONE");
		}
		else if(n==2)
    	{
    		printf("TWO");
		}
		else if(n==3)
    	{
    		printf("THREE");
		}
		else if(n==4)
    	{
    		printf("FOUR");
		}
		else if(n==5)
    	{
    		printf("FIVE");
		}
		else if(n==6)
    	{
    		printf("SIX");
		}
		else if(n==7)
    	{
    		printf("SEVEN");
		}
		else if(n==8)
    	{
    		printf("EIGHT");
		}
		else if(n==9)
    	{
    		printf("NINE");
		}
		rem=rem/10;
	}
}
