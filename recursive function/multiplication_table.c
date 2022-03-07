#include<stdio.h>

int table(int n){
	int i;
	if(n<=10){
		for(i=1; i<=10; i++)
			printf("%-4d", n*i);
		printf("\n");
		return table(n+1);	
	}
	else 
		return 1;
}

int main(){
	int n=1;
	table(n);
	return 0;
}
