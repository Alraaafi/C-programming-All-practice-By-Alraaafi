#include<stdio.h>
int swap(int *n1, int *n2){
    int temp = *n1 ;
        *n1 = *n2 ;
        *n2 = temp ;
}
int main(){
    int a = 10, b = 20;
    printf("before swap: a = %d, b = %d \n",a,b);

    swap(&a,&b);

    printf("After swap: a = %d, b = %d \n",a,b);

    }


