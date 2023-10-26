#include<stdio.h>
void main()
{
	int num[10],i,n,pc=0,nc=0;
	for(i=0;i<5;i++)
	{
		printf("Enter the array elements: ");
		scanf("%d", &num[i]);
	}
	for(i=0;i<5;i++)
	{
	    if(num[i]>=0)
	    {
		    pc=pc+1;
	    }
        else
	    {
		    nc=nc+1;
	    }
    }
	printf("Positive=%d,Negative=%d", pc,nc);
}
