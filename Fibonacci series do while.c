#include<stdio.h>
int main(){
    //Fibonacci series  0 1 1 2 3 5 8 ....
    // first number + second number =  Fibonacci relative number

    int fib,firstNum = 0,secoundNum = 1,count = 0,n;

    printf("enter fib last nth number:");
    scanf("%d",&n);


    do {
        if(count<=1)
            fib = count;
        else{
            fib = firstNum  + secoundNum;
            firstNum = secoundNum;
            secoundNum = fib;
        }
        printf("%d \t",fib);
        count++;
    }
    while(count < n);
}
