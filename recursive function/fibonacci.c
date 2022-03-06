#include <stdio.h>
int fib(int);
int main(){
	
	int n,i;
	
	printf("Write a number: \n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("%d ",fib(i));
	}
	return 0;
}

int fib(int n){
	if(n==0 || n==1)
		return n;
	else
		return fib(n-1) + fib(n-2);		
}
