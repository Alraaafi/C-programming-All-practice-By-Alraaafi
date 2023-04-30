#include<stdio.h>
int main(){
    //Fibonacci series  0 1 1 2 3 5 8 ....
    // first number + second number =  Fibonacci relative number
    int num1 = 0,num2 = 1;
    int count,fib,n;

    printf("fib nTH=");
    scanf("%d",&n);

    for(count = 0; count < n; count++){
        if(count <= 1){
            fib = count;
        }
        else{
            fib = num1 + num2;
            num1 = num2 ;
            num2 = fib ;
        }
        printf("%d  ",fib);
    }





}
