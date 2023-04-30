#include<stdio.h>
int main(){
int N,col,row;
printf("N=?");
scanf("%d",&N);
for(row=N; row>=1; row--){
    for(col=1; col<=(N-row); col++) printf(" ");
    for(col=1; col<=row; col++) printf("%d",col);
    for(col=row-1; col>=1; col--) printf("%d",col);
    printf("\n");
}
return 0;
}
