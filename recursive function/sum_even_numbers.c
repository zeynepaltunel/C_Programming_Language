#include <stdio.h>

int f(int n){
    if(n%2==1)
        n-=1;
    else if(n==0)
        return 0;
    return (n+f(n-2));
    
}

int main() {
    int n;
    printf("Write a number: \n");
    scanf("%d", &n);
    printf("sum = %d\n",f(n));
    return 0;
}
