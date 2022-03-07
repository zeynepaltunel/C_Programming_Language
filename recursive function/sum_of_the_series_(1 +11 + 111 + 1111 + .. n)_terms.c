#include<stdio.h>
int x=0,sum=0;

int series(int);

int main(){
	int n,a;
	
	printf("Write a number: \n");
	scanf("%d", &n);
	
	a=series(n);
	printf("%d. series = %d", n,a);
	
	return 0;
}

int series(int n){
	if(n==0)
		return x;
	
	sum = 1 + sum*10;
	x+=sum;	
	
	return series(n-1);

}
