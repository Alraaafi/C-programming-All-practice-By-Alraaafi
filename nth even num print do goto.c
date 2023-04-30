#include<stdio.h>
int main(){
    int i=2,n;
    printf("enter even serise last number:");
    scanf("%d",&n);
    rafiVai:
        printf("%d\n",i);
        i = i + 2;
    if( i <= n ){
        goto rafiVai;
    }


}
