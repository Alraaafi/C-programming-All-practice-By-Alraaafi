#include<stdio.h>
int main(){
int N,col,row;
printf("N=?");
scanf("%d",&N);
for(row=1; row<=N; row++){
    for(col=1; col<=N; col++){
        if(col==(N+1)-row || row==col) printf("*");
        else printf(" ");
    }
    printf("\n");
}
return 0;
}
