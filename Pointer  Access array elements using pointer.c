#include<stdio.h>
int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    int i;
    int *p;

    p = &nums[0];

    for(i=0; i<5; i++){
        printf("%d\n",*p);
        p++;
    }
}
