#include <stdio.h>

int max(int a[], int n){
	static int max1=0;
	
	if(n>=0){
		if(a[n]>max1){
			max1=a[n];
		}
	return max(a, n-1);	
	}
	else
		return max1;
}

int main(){
	int i,n,x;
	int a[100];
	
	printf("Write an array size: \n");
	scanf("%d", &n);
	printf("Write numbers: \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	x=max(a,n-1);
	printf("%d", x);
	
	return 0;
}
