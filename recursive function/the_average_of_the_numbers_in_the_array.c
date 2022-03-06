#include <stdio.h>


float average(int a[],int b){
    if(b==0)
        return 0;
    return a[b-1]+average(a,b-1);
    
}
int main(){
    int a[5]={1,2,3,4,5};
    printf("Average = %f \n", average(a,5)/5);
    
	return 0;
}
