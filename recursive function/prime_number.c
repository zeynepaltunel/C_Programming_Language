#include<stdio.h>

int prime(int n, int temp){
	if(n==2)
		return 0;
	if(temp==1)
		return 0;
	if(n%temp==0){
		return 1;
	}
	else if(n%temp!=0)
		prime(n,temp-1);
}

int main(){
	int n,temp,a;
	printf("Write a number: \n");
	scanf("%d",&n);
	temp=n-1;
	a=prime(n,temp);
	if(a==0)
		printf("%d is a prime number.", n);
	if(a==1)
		printf("%d is not a prime number.", n);	
		
	return 0;
}
