//1.5+2.5+3.5+...
#include<stdio.h>
int main(){
   int a=12; //12 binary =1100
   int b=15; //15 binary =1111
   int or = a | b;
   int and= a & b;
   int xor= a ^ b;
   int r  = a>>1;
   int l  = b<<2;
   printf("binary or is %d\n",or);
   printf("binary and is %d\n",and);
   printf("binary xor is %d\n",xor);
   printf("binary or is %d \n",~or); //one's compliment with oposite sign
   printf("right sift of %d is:%d\n",a,r);
   printf("left sift of %d is:%d\n",b,l);
}
