#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,n,m;
	
	printf("Write lenght of your name\n");
	scanf("%d", &n);
	
	char *name=(char*)malloc(n*sizeof(char));
	
	printf("Write lenght of your surname\n");
	scanf("%d", &m);
	
	name=(char*)realloc(name,(n+m+2)*sizeof(char));
	
	printf("Write your name and surname\n");
	for(i=0; i<n+m+2; i++){
		scanf("%c", name+i);
	}
	
	for(i=0; i<n+m+2; i++){
		printf("%c", *(name+i));
	}
	
	return 0;
}
