#include<stdio.h>
int main(){
    int a = 50 , b = 30 , add;
    int *p1, *p2 ;

    p1 = &a;
    p2 = &b;

    add = *p1 + *p2 ;

    printf("SUM is : %d",add);
}
