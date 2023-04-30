#include<stdio.h>
int main(){
    int n,row,col;
    printf("n=");
    scanf("%d",&n);

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col=col+1) printf(" ");
        for(col=1; col<=(2*row-1); col++) printf("*");//*,col,+64%c...
        printf("\n");
    }


}
