#include<stdio.h>

int main(){
	
	char i;
	char *iptr;
	
	iptr=&i;
	
	printf("i boyutu: %d\n", sizeof(i));
	printf("iptr boyutu: %d\n", sizeof(iptr));
	
	getchar();
	
	return 0;
}
