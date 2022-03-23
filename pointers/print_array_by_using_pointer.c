#include<stdio.h>

int main(){
	int i;
	int a[10];
	int *ptr;
	
	ptr=a;
	
	printf("enter number\n");
	
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	
	ptr=a;
	
	for(i=0; i<10; i++){
		printf("%d\n",  *(ptr + i));
	}
	
	getchar();
	return 0;
}
