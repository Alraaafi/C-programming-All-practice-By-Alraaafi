#include<stdio.h>
int main(){
    int a;
    printf("Enter a number for square:");
    scanf("%d",&a);
    int outputSqr = sqr(a);
    printf("The Square of %d is = %d",a,outputSqr);
    getch();
    return 0;
}
int sqr(num){
    return num * num;
}
