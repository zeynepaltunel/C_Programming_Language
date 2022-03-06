#include <stdio.h>

int sum(int n1,int n2){
    if(n1==n2)
        return n2;
    else
		return n1+sum(n1+1,n2);
}

int main(){
    int n1,n2;
	int temp=0;
    printf("Write two numbers: \n");
    scanf("%d %d", &n1,&n2);
    if(n1>n2){
        temp=n2;
        n2=n1;
        n1=temp;
    }
    printf("%d\n", sum(n1+1,n2-1));
    return 0;
}
