#include<stdio.h>
void main(){
	int n,count=0,i,digit;
	int arr[10]={0};
	printf("number: ");
	scanf("%d",&n);
	
	while(n!=0){
		digit=n%10;
		arr[digit]++;
		n/=10;
	} 
	
	printf("frequency of digit: ");
	for(i=1;i<10;i++){
		if(arr[i]>0){
			printf("digit=%d : %d\n",i,arr[i]);
		}
	}
}
