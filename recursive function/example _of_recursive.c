#include<stdio.h>
void fun(int n, int a, int b)
{
	if (n >= 10)
		return;
	fun(n + 2, a, b + n);
	printf("%d %d %d\n", n, a, b);
}

int main(){
	int n=0,a=5,b=7;
	
	fun(n,a,b);
	
	return 0;
}


