#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n = n * fact(n-1);
    }
}

int main(){

int r1 = fact(6);
printf("fact is %d",r1);

}
