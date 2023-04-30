#include<stdio.h>
int main(){
    //swap with temp
    int a = 14 ;
    int b = 6;

    printf("before swap a = %d and b = %d \n",a,b);
     //var store num seems like empty container to full container in water
    a = a - b ;//a = 14-6 = 8
    b = a + b ;//b =  8+6 = 14
    a = b - a ;//a = 14-8 = 6

    printf("after swap %d and %d",a,b);

}
