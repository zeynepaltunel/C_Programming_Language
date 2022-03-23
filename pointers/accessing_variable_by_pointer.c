#include<stdio.h>

int main(){
	
	int i;
	int *iptr;
	iptr=&i;
	*iptr=8;
	
	printf("value of i: %d\n", i);
	printf("address of value: %p\n", iptr);
	
	getchar();
	
	return 0;
}
