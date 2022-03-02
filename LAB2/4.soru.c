#include<stdio.h>

int func(int x, int y);

int main(){
	int temp;
	int x,y,a;
	printf("Write two number: \n");
	scanf("%d %d", &x,&y);
	
	if(y>x){
		temp=y;
		y=x;
		x=temp;
	}
	
	a=func(x,y);
	printf("%d", a);
	return 0;
}

func(int x, int y){
	static int temp=0;
	if(x%y==0)
		return y;
	else
		temp=x%y;
		x=y;
		y=temp;
		return func(x,y);
}


