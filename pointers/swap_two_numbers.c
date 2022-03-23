#include<stdio.h>

int swap(int*, int*);

int main(){
	
	int a,b;
	int *aptr,*bptr;
	
	aptr=&a;
	bptr=&b;
	
	printf("Write two number: \n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	printf("\n");

	swap(aptr,bptr);
	
	getchar();
	return 0;
}

int swap(int *x, int *y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
	
	printf("a = %d \nb = %d",*x,*y);
	
	
}
