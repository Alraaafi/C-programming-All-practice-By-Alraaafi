#include<stdio.h>
int main(){
    int n =10;

    int *ptr;

    ptr = &n;

   printf("My given variable value is: %d\n",n);
   printf("memory storage address of n is: %d\n",&n);
   printf("memory storage address of n by pointer variable: %d\n",ptr);
   printf("storage value of the pointer variable: %d\n",*ptr);
   printf("memory storage address of pointer is: %d\n",&ptr);


}
