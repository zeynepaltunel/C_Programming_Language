#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n,m,i;
	char N[14];
	
	printf("Write the length of your first name\n");
	scanf("%d", &n);
	
	printf("Write the length of your first name\n");
	scanf("%d", &m);
	
	char *name=(char*)malloc(n+m+2*sizeof(char));
	
	printf("Write your name and surname\n");
	
	for(i=0; i<n+m+2; i++){
		scanf("%c", &N[i]);
	}
	
	strcpy(name, N);
	
	for(i=0; i<n+m+2; i++){
		printf("%c", *(name+i));
	}	
	
	return 0;	
}
