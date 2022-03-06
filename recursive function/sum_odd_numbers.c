#include <stdio.h>

int f(int n){
    if(n%2==0)
        n-=1;
    else if(n==1)
        return 1;
    return (n+f(n-2));
    
}

int main() {
    int n;
    printf("Write a number: \n");
    scanf("%d", &n);
    printf("sum = %d\n",f(n));
    return 0;
}
