#include <stdio.h>

int sum(int n){

	if(n==1){
		return 1;
	}
	return n + sum(n-1);	
	
}
int main(){
	
	int n,x;
	
	printf("Write a number; \n");
	scanf("%d", &n);
	
	x=sum(n);
	printf("%d", x);
	return 0;
}
