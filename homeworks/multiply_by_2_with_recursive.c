#include <stdio.h>
int func(int x){
	if(x<=0)
		return 0;
	else
		return func(x-1)+2;				
}

int main(){
	int n,a;
	printf("Write a number: \n");
	scanf("%d", &n);
	a=func(n);
	printf("%d", a);
	return 0;
}
