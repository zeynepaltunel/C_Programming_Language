#include<stdio.h>
#include<stdlib.h>

int *combine(int[],int,int[],int);

int main(){
	int i;
	int A[6]={1,5,11,13,14,35};
	int B[8]={2,3,12,13,15,17,25,32};
	int *ptr;
	
	ptr=combine(A,6,B,7);
	
	for(i=0; i<14; i++){
		printf("%d ", *(ptr+i));
	}
	getchar();
	return 0;
}

int *combine(int a[], int x, int b[], int y){
	int *ptr1;
	int *ptr2;
	int i;
	int *result=(int*)calloc(x+y, sizeof(int));
	ptr1=a;
	ptr2=b;
	
	if(result==NULL)
		printf("not enough memory!\n");
	
	for(i=0; i < x+y; i++){
		if ( i == x+y-1 ) {
			if ( *ptr1 < *ptr2)
				*(result + i + 1) = *ptr2;
			else
				*(result + i + 1) = *ptr1;
		}
		
		if(*ptr1 < *ptr2){

			*(result+i)=*ptr1;
			ptr1++;
			
		}
		else{
			*(result+i)=*ptr2;
			ptr2++;
		}
	}
	
	return result;
}
