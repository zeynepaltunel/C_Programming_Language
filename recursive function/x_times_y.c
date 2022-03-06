#include<stdio.h>

int multi(int,int);

int main(){
	
	int x,y;
	
	printf("Write two numbers: \n");
	scanf("%d %d", &x,&y);
	
	printf("%d times %d = %d", x,y, multi(x,y));
	return 0;
}

int multi(int x, int y){
	if(y==1)
		return x;
	else
		return x + multi(x,y-1);	
}
