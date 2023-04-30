#include<stdio.h>
int main(){
    int row,col,n;
    printf("enter row no:");
    scanf("%d",&n);


    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++){
            printf("%c ",col+64); //if col+96 then print small letter
        }

        printf("\n");
    }
}
