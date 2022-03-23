#include<stdio.h>

int f(int,int*,int**);
int main(){
	int c, *b, **a;
	c=4;
	b=&c;
	a=&b;
	
	printf("%d", f(c,b,a));
	
	getchar();
	return 0;
}

int f(int x, int *py, int **ppz){
	**ppz += 1;
	x= *py * **ppz;
	*py *= 2;
	x *= *py + 3;
	
	return(x + *py + **ppz);
}
