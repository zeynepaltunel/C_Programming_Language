#include<stdio.h>

int main(){
	
	int i[10],j;
	int *iptr;
	
	for(j=0; j<10; j++)
		i[j]=j;
	
	iptr=i;
	
	for(j=0; j<10; j++){
		printf("%d ", *iptr);
		iptr++;
	}
	printf("\n%d \n", *(iptr-1));
	iptr=i;
	
	for(j=0; j<10; j++)
		printf("%d ", *(iptr+j));
	
	printf("\n%d",*iptr);	
			
	getchar();
	
	return 0;
}
