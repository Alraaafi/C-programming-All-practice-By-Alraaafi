#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter N for pettern:");
    scanf("%d",&n);

    for(row=n; row>=n; row--){
        for(col=n-row; col<=row; col++){
            printf(" "); //print space
        }
        for(col=1; col<=row; col++){
            printf("%d",col); //print object
        }
        printf("\n");
    }
}

