#include<stdio.h>

int main(){
	
	int a[5];
	int *ptr;
	int sum=0;
	int i;
	
	ptr=a;
	
	printf("Write numbers\n");
	for(i=0; i<5; i++){
		scanf("%d", &*(ptr+i));
	}
	
	ptr=a;
	
	for(i=0; i<5; i++){
		
		sum=sum+*(ptr+i);
		
	}
	
	printf("sum=%d", sum);
	
	getchar();
	return 0;
}
