#include<stdio.h>
int func(int[], int, int);
int main(){
	int a[100];
	int n,i,x, b=0;
	
	printf("Write a size: \n");
	scanf("%d", &n);
	printf("Write numbers: \n");
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	x=func(a,n-1,b);
	printf("%d", x);
	return 0;
}

int func(int a[], int n ,int b){
	
	if(n<0)
		return b;
	if(a[n]%2==0)
		b++;
	
	return func(a,--n,b);		
}
