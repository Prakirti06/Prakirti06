#include<stdio.h>
void main()
{
	int n,i,j,f;
	float e;
	for(e=0,n=3,i<n;i=0;--n)
	{
		for(f=1,j=n;j>0;--j)
		{
			f*=j;
			e+=1/f;
		}
	}
	printf( "The e value is %.9f\n", 1.0 + e );
}            
