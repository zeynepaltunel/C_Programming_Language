#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i=0,k=0,n,x,y;
	int *ptr=(int*)malloc(1*sizeof(int));
	
	printf("Write your schoool number: \n");
	scanf("%d", &n);
	
	while(n!=0){
		
		ptr=(int*)realloc(ptr,(i+1)*sizeof(int));
		*(ptr+i)=n%2;
		n=n/2;
		i++;
		
	}
	
	x=i;
	y=i/2;
	int temp=0;
	
	for(k=0; k<y; k++){
		temp=*(ptr+k);
		*(ptr+k)=*(ptr+i-1);
		*(ptr+i-1)=temp;
		i--;
	}

	for(k=0; k<x; k++){
		printf("%d", *(ptr+k));
	}
	
	
	return 0;
}

