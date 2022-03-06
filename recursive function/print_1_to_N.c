#include<stdio.h>

void func(int);

int main(){
	
	int n,x;
	
	printf("Write a number; \n");
	scanf("%d", &n);

	func(n);
	return 0;
}

void func(int n){
	if(n==0)
		return 0;
	else
		printf("%d\n", n);
	func(n-1);		
}
