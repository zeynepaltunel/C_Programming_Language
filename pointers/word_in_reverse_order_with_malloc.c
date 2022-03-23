#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char A[100];
	int n=0,i;
	
	printf("Write something: \n");
	gets(A);
	
	while(A[n]!='\0'){
		n++;
	}
	
	char *ptr=(int*)malloc(n*sizeof(char));
	ptr=A;
	
	printf("Reversed version is ");
	for(i=n; i!=0; i--){
		printf("%c", *(ptr+i-1));
	}
	
	return 0;
}
