#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char str[50];
	char str2[50];
	int a,b;
	
	strcpy(str,"Hava bugun cok guzel.");

	strcpy(str2," Hadi disari cikalim.");
	
	a=strcmp(str,str2);
	
	if(a>0)
		printf("str2 is less than str\n");
	if(a<0)
		printf("str is less than str2\n");
	else 
		printf("They are equal.\n");		
	
	strcat(str,str2);
	
	b=strlen(str);
	
	printf("dizinin uzunulugu %d\n", b);
	
	printf("Final destination: %s", str);
	 

	return 0;
}
