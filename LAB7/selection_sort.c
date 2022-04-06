#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int *ptr;
	int n,i,j,min,index;
	
	printf("Write size of array: \n");
	scanf("%d", &n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", ptr+i);
	
	for(i=0; i<n-1; i++){
		
		min=*(ptr + n - 1);
		index=(n-1);
		for(j=i; j<n-1; j++){
			
			if(*(ptr+j)<min){
				min=*(ptr+j);
				index = j;
			}
			
		}
		*(ptr+index)=*(ptr+i);
		*(ptr+i)=min;
	}
	
	for(i=0; i<n; i++)
		printf("%d ", *(ptr+i));
	
	return 0;
}
