#include<stdio.h>
int main()
{
    int N,row,col;
    scanf("%d",&N);

    for(row=1; row<=N; row++){
        for(col=1; col<=row; col++){
            printf("%c ",row+96);
        }
        printf("\n");
    }
    for(row=N-1; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("%c ",row+96);
        }
        printf("\n");
    }
}
