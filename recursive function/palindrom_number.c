#include <stdio.h>
int sum=0;

palindrome(int n){
    if(n==0)
        return 0;
    int mod=0;
    mod=n%10;
    sum=mod+(sum*10);
    return palindrome(n/10);
}

int main() {
    
    int n;
    printf("Write a number: \n");
    scanf("%d", &n);
    palindrome(n);
    if (sum==n)
        printf("This is a polindrom number!\n");
    else
        printf("Not a polindrom number!\n");
    return 0;
}
