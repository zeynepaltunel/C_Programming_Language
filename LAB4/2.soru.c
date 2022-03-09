#include<stdio.h>
 int main(){
 	
 	int a,b;
 	int *aptr,*bptr;
 	aptr=&a;
 	bptr=&b;
 	
 	printf("Write two number: \n");
 	scanf("%d %d", &a,&b);
 	
 	printf("%d+%d=%d", a,b, *aptr+*bptr);
 	
 	getchar();
 	return 0;
 }
