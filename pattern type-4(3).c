#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter N for pettern:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" "); //print space
        }
        for(col=1; col<=row; col++){
            printf("%d",row%2); //print object
        }
        printf("\n");
    }
}

