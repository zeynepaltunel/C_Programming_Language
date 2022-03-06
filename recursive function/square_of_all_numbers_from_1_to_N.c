#include<stdio.h>

void square(int,int);

int main(){
	int n,i;
	int a=1;
	
	printf("Write a number: \n");
	scanf("%d", &n);
	
	square(a,n);
	
	return 0;
}
void square(int a,int n){
	if(a>n)
		return a;
	else
		printf("%d\n", a*a);	
	square(a+1,n);
}
