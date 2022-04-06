#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int *ptr;
	int n,i,j,add;
	
	printf("Write size of array: \n");
	scanf("%d", &n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d", ptr+i);
	
	for(i=0; i<n; i++){
		add=*(ptr+i);
		for(j=i-1; j>=0 && add <=*(ptr+j); j--)
			*(ptr+j+1)=*(ptr+j);
		*(ptr+j+1)=add;
	}
	
	for(i=0; i<n; i++)
		printf("%d ", *(ptr+i));
	
	return 0;
}
