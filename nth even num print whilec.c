#include<stdio.h>
int main(){
    int i=2,n;
    printf("enter even serise last number:");
    scanf("%d",&n);
    while( i <= n ){
        printf("%d\n",i);
        i = i + 2;
    }
}
