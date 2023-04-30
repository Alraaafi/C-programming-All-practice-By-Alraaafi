#include<stdio.h>
int main(){
    int a=5,b=5,c=5,d=5,e=5;
    a+=2; //a=a+2 >>7
    b-=2; //a=a-2 >>3
    c*=2; //a=a*2 >>10
    d/=5; //a=a/5 >>1
    e%=2; //a=a%2 >>1

    printf("if a = %d \n",5);
    printf("a+=2 >> a=a+2: %d \n",a);
    printf("a-=2 >> a=a-2: %d \n",b);
    printf("a*=2 >> a=a*2: %d \n",c);
    printf("a/=5 >> a=a/5: %d \n",d);
    printf("a modulus =2 >> a=a modulus 2: %d \n",e);


}
