#include<stdio.h>
struct Test{
    int a;
    int b;

    //that mean a=b or b=a
};
int main(){
    struct Test valu1,value2;

    valu1.a = 20; //so, value.b = 20
    printf("a value:%d\n",valu1.a);
    printf("b value:%d\n",valu1.b);

    printf("\n");

    valu1.b = 50; //so, value.b = 20
    printf("a value:%d\n",valu1.a);
    printf("b value:%d\n",valu1.b);



}
