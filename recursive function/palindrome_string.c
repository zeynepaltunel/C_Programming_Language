#include <stdio.h>
#include <string.h>

int k=0;

int palindrome(char A[],int length){
    
    static int k=0;
    
    if(length<0)
        return 1;
    if(A[length]==A[k]){
        k++;
        return palindrome(A, length-1);
    }
    else
        return 0;
}

int main() {
    char A[100];
    int length;
    printf("Write something: \n");
    gets(A);
    length=strlen(A)-1;
    if(palindrome(A,length)==0)
        printf("Not a polindrome\n");
    else
        printf("Palindrome\n");
    
    return 0;
}
