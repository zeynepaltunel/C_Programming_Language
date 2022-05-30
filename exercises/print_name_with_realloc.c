#include<stdio.h>
#include<string.h>

int main(){
	
	char *ptr,*name;
	int sum=0,a,b,no;
	int n=0;
	
	name=(char*)malloc(7*sizeof(char));
	strcpy(name,"Zeynep");
	
	printf("Enter your student number: \n");
	scanf("%d", &no);
	
	while(no!=0){
		a=no%10;
		no=no/10;
		sum=sum+a;
	}	
	name=(char*)realloc(name,(sum)*sizeof(char));
	ptr=name;	
	
	b=(sum)/6; // b times repeat
	
	while(b!=0){

		*(ptr)='Z';
		*(ptr+1)='e';
		*(ptr+2)='y';
		*(ptr+3)='n';
		*(ptr+4)='e';
		*(ptr+5)='p';
		ptr+=6;
		b--;
	}	
	
	printf("%s", name);
	
	return 0;
}

