#include<stdio.h>);
int powr(int base, int exp){
    int i,res=1;
    for(i=1; i<=exp; i++){
        res = res * base;
    }
    return res;
}
int main(){
    int base,exp;
    while(1){
        printf("Enter base and power:");
    scanf("%d %d",&base,&exp);
    printf("The %d^%d is : %d\n",base,exp,powr(base,exp));
    }
}

