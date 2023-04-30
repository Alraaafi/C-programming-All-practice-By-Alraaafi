#include<stdio.h>
int main(){
    int a[5] = {2,4,6,8,10};
    int i,sum=0;
    for(int i=0; i<5; i++){
        //printf("%d\n",*(a+i)); //shaw all array of index.
        sum = sum + *(a+i);
    }
    printf("sum = %d\n",sum);

}
