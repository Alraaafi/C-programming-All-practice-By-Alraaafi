#include<stdio.h>);

void disArr(int ary[]){
    int i;
    for(i=0;i<5; i++){
            printf("%d ",ary[i]);
    }
}


int main(){
    int ary[5]= {10,20,30,40,50,};
    disArr(ary);
}

