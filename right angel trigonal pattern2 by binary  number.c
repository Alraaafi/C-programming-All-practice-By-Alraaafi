#include<stdio.h>
int main(){
    int row,col,n;
    printf("enter row no:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d ",row%2); //row wize
        }
        printf("\n");
    }
    getchar();
    return 0 ;
}
