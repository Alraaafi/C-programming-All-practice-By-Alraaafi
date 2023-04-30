#include<stdio.h>

void swap(int *p1, int *p2){
 //swapping
 int temp;
    temp = *p1;
    *p1  = *p2;
    *p2  = temp;
 }

int main(){
    int x = 99 , y = 66,temp;

    printf("\t\t before Swaping\n");
    printf("X = %d\nY = %d\n",x,y);

    swap(x,y);

    printf("\t\t before Swaping\n");
    printf("X = %d\nY = %d\n",x,y);

}
