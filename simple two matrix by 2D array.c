#include<stdio.h>
int main()
{
    //initialization
    int i,j;
    int matrix_1[3][4];
    int matrix_2[3][4];

    //matrix_1 input part...
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter a matrix elements for matrix_1[%d][%d]:",i,j);
            scanf("%d",&matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("matrix_1:\n");
    //matrix_1 output part...
    for(i=0; i<3; i++){
             printf("\t");
        for(j=0; j<4; j++){
            printf("%d ",matrix_1[i][j]);
        }
        printf("\n");
    }



    //matrix_2 input part...
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("Enter a matrix elements for matrix_2[%d][%d]:",i,j);
            scanf("%d",&matrix_2[i][j]);
        }
        printf("\n");
    }
    printf("matrix_2:\n");
    //matrix_2 output part...
    for(i=0; i<3; i++){
             printf("\t");
        for(j=0; j<4; j++){
            printf("%d ",matrix_2[i][j]);
        }
        printf("\n");
    }
}
