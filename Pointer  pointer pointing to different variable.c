#include<stdio.h>
int main(){
    int x =10,y=50,z=80;

    int *ptr;

   ptr = &x;
   printf("X : %d\n\n",*ptr);

   ptr = &y;
   printf("Y : %d\n\n",*ptr);

   ptr = &z;
   printf("z : %d\n\n",*ptr);
}
