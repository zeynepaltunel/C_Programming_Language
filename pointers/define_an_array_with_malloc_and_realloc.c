#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,m,i;
	
	printf("Write size of an array: \n");
	scanf("%d", &n);
	
	int *ptr=(int*)malloc(n*sizeof(int));
	
	printf("Write eleman of array:\n");
	for(i=0; i<n; i++){
		scanf("%d", ptr+i);
	}
	
	printf("Write size of an array again!: \n");
	scanf("%d", &m);
	
	ptr=(int*)realloc(ptr,(n+m)*sizeof(int));
	
	printf("Write new eleman of array:\n");
	for(i=n; i<n+m; i++){
		scanf("%d", ptr+i);
	}
	printf("\n");
	for(i=0; i<n+m; i++){
		printf("%d\n", *(ptr+i));
	}
	
	return 0;
}
