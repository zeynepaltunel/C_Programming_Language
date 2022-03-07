#include<stdio.h>

int reverse(int,int);

int main(){
	int n,temp;
	printf("Write a number: \n");
	scanf("%d", &n);
	temp=n;
	reverse(n,temp);
	return 0;
}

int reverse(int n,int temp){
	if(temp<1)
		return 1;

	printf("%d ", temp);
	reverse(n,temp-1);		
}
