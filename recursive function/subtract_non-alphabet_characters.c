#include<stdio.h>
#include<string.h>

int subs(char str[],long l,int temp){
	
	if(temp==l)
		return 0;
	else if(str[temp] >= 'a' && str[temp] <= 'z' || str[temp] >= 'A' && str[temp] <= 'Z') 
		printf("%c",str[temp]);
	return subs(str,l,temp+1);	
	return 0;	
}

int main(){
	
	char str[100];
	long l=0;
	int temp=0;
	printf("Write something: \n");
	gets(str);
	
	l=strlen(str);
	temp=0;
	subs(str,l-1,temp);
	
	return 0;
}
