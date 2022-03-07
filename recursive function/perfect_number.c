#include<stdio.h>
int sum=0;

int perfect(int,int);

int main(){
	
	int n,temp;
	
	printf("Write a number: \n");
	scanf("%d", &n);
	
	temp=n-1;
	perfect(n,temp);
	
	if(sum==n)
		printf("%d is a perfect number.", n);
	else
		printf("%d is not a perfect number.",n);	
	return 0;
}

int perfect(int n,int temp){
	if(temp==0){
		return 0;
	}
	if(n%temp==0)
		sum=sum+temp+perfect(n,temp-1);
	return perfect(n,temp-1);	
	
}
