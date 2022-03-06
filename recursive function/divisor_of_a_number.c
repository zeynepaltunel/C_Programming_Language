#include <stdio.h>

int divisor(int n,int temp){
    if (temp==0)
        return 0;
    else if(n%temp==0)
        printf("%d \n",temp);
    return divisor(n,temp-1);
}

int main() {
    int n,temp;
    printf("Write a number\n");
    scanf("%d",&n);
    printf("Divisors: \n");
    temp=n;
    divisor(n,temp);
    return 0;
}
