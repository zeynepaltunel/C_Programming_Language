#include<stdio.h>

int hcf(int x, int y);

int main(){
	int temp,lcm;
	int x,y,a;
	printf("Write two number: \n");
	scanf("%d %d", &x,&y);
	
	if(y>x){
		temp=y;
		y=x;
		x=temp;
	}
	
	a=hcf(x,y);
	
	lcm= (x * y) / a;
	
	printf("least common multiple is %d", a);
	
	return 0;
}

hcf(int x, int y){
	static int temp=0;
	if(x%y==0)
		return y;
	else
		temp=x%y;
		x=y;
		y=temp;
		return hcf(x,y);
}
