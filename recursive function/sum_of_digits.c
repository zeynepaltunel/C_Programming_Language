#include<stdio.h>

int digit_sum(int n){
	static  x, sum=0;
	if(n>0){
		x=n%10;
		n=n/10;
		sum=sum+x;
		return digit_sum(n);
	}
	return sum;
}

int main(){
	int n,sum;
	printf("Write a number: \n");
	scanf("%d", &n);
	
	sum=digit_sum(n);
	printf("%d", sum);
	
	return 0;
}
