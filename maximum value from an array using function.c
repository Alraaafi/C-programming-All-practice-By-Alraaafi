#include<stdio.h>);

int maxArr(int ary[]){
    int i,max;
    max = ary[0];
    for(i=1;i<5; i++){
            if(max<ary[i]) max = ary[i] ;
    }
    return max;
}


int main(){
    int ary[5]= {10,30,20,50,40};
    int maxNum ;
    maxNum = maxArr(ary);
    printf("the max array is : %d",maxNum);
}

