#include<stdio.h>

int sum=0;

int pow(int,int);
int digit(int);
int armstrong(int,int);

int main(){
	
	int n,a=0,b;
	
	printf("Write a number: \n");
	scanf("%d", &n);
	
	a=digit(n);
	b=armstrong(n,a);

	if(b==n)
		printf("%d is a armstong number.", n);
	else
		printf("%d is not a armstrong number.", n);	

	return 0;
}

int digit(int n){
	if(n==0)
		return 0;
	else{
		return 1+digit(n/10);
	}		
}

int pow(int x,int a){
	int i,m=1;
	for(i=0; i<a; i++)
		m=m*x;
	return m;	
}

int armstrong(int n, int a){
	int x;
	if(n==0)
		return sum;
	
	x=n%10;
	n=n/10;
	
	sum=sum+pow(x,a);
	
	return armstrong(n,a);
	
}
