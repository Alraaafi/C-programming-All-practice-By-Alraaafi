#include<stdio.h>
int main(){
    int a[5] = {2,4,6,8,10};
    for(int i=0; i<5; i++){
        printf("array location of index-%d is: %u\n",i,&a[i]);
    }
    printf("-------------------------------------------\n");
    printf("Hole array location of a is: %u\n",a); //that is 1st array index location

}
