#include<stdio.h>

int main(){
	
	char a[100];
	char *aptr;
	int i=0, x;
	
	aptr=a;
	
	printf("Write sometthing:\n");
	gets(a);
	
	aptr=a;

	
	while(aptr[i] !='\0'){
		i++;
	}
	while(i>=0){
		printf("%c",aptr[i-1]);
		i--;
	}
	
	getchar();
	return 0;
}
