#include <stdio.h>

int alph(char);

int main() {
    char c;
    
    c='A';
    
	alph(c);
    
    return 0;
}

int alph(char c){
	if(c>='Z'){
		return 0;
	}		
	printf("%c ", c);
	++c;		
	return alph(c);
}


