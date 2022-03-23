#include<stdio.h>

int main(){
	int i;
	int *iptr;
	i=5;
	iptr=&i;
	
	printf("i adresi %p\n", &i);
	printf("iptr degeri %p\n", iptr);
	
	printf("i degeri %d\n", i);
	printf("*iptr degeri %d\n", *iptr);
	
	getchar();
	
	return 0; 
}

