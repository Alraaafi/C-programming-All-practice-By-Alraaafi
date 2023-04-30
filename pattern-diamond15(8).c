#include<stdio.h>
int main(){
    int n,row,col;
    printf("n=");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col=col+1) printf(" ");
        for(col=1; col<=row; col++) printf("* ");//*,col,+64%c...
        printf("\n");
    }

    //...

    for(row=n-1; row>=1; row--){
        for(col=1; col<=n-row; col=col+1) printf(" ");
        for(col=1; col<=row; col++) printf("* ");//*,col,+64%c...
        printf("\n");
    }



}
