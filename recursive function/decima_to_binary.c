#include <stdio.h>

int binary(int n){
    if(n/2!=0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
    else
    {
        printf("%d",n%10);
    }
    return 0;
}

int main(){
    int n;
    printf("Write a number: \n");
    scanf("%d", &n);
    binary(n);
    
    return 0;
}
