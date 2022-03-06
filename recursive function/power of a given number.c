#include <stdio.h>

int pow(int, int);

int main(){
	int x,y,result;

	printf("Write two number: \n");
	scanf("%d %d", &x,&y);
	
	result = pow(x,y);
	
	printf("%d", result);
	
	return 0;
}

int pow(int x, int y){
	
	if(y==1)
		return x;
	else;
		return x * pow(x,y-1);	
}

