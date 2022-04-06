#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int *ptr;
	int n,i,j,temp;
	
	printf("Write size of array: \n");
	scanf("%d", &n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", ptr+i);
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1-i; j++){
			if(*(ptr+j)>*(ptr+j+1)){
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
	
	for(i=0; i<n; i++)
		printf("%d ", *(ptr+i));
	
	return 0;
}
