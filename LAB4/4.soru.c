#include<stdio.h>

int main(){
	
	char a[100];
	char *aptr;
	int x=0,i=0;
	
	aptr=a;
	
	printf("Write something: \n", a);
	gets(a);
	
	while(*(aptr+i)!='\0'){
		i++;
		x++;
	}
	printf("length = %d", x);
	
	
	getchar();
	return 0;
}
