#include<stdio.h>
int sum(int *a, int *sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        (sum = sum + *(a+i));
    }
    return sum;
}
int main(){
    int arr[4] = {1,2,3,4};
    int summation = sum(arr,4);
    printf("Summation of array is: %d",summation);
    }


