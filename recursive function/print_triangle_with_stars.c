#include <stdio.h>

void triangle(int);

int main(){ 
	int a;
	printf("Write number of row: \n");
	scanf("%d", &a);
	triangle(a);
	
	return 0;
}
void triangle(int n){
	int i=0;
	if(n>1){
		triangle(n-1);
		printf("\n");
	}
	for(i = 0; i < n ; i++)
		printf(" *");
} 
