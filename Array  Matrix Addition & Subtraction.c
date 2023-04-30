#include<stdio.h>
int main()
{
    //initialization
    int i,j,row,col;
    printf("enter row and column for 2 matrix:");
    scanf("%d %d",&row,&col) ;
    int matrix_1[row][col] ;
    int matrix_2[row][col] ;
    int matrix_sum[row][col];
    int matrix_sub[row][col];

    //INPUTING

    //matrix_1 input part...
    printf("Enter A matrix elements:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("matrix_A[%d][%d]:",i,j);
            scanf("%d",&matrix_1[i][j]);
        }
        printf("\n");
    }

    //matrix_2 input part...
    printf("Enter B matrix elements:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("matrix_B[%d][%d]:",i,j);
            scanf("%d",&matrix_2[i][j]);
        }
        printf("\n");
    }

    //SUMMATION A+B:
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
                matrix_sum[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
        }
    }

    //SUBTRACTION A-B:
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
                matrix_sub[i][j] = matrix_1[i][j] - matrix_2[i][j] ;
        }
    }




    //OUTPUTING:

    //matrix_1 output part...
    printf("matrix_A:\n");
    for(i=0; i<row; i++){
             printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",matrix_1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    //matrix_2 output part...
    printf("matrix_B:\n");
    for(i=0; i<row; i++){
             printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",matrix_2[i][j]);
        }
        printf("\n");
    }

     printf("\n\n");

    //matrix_sum output part...
    printf("matrix_A + matrix_B:\n");
    for(i=0; i<row; i++){
             printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",matrix_sum[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //matrix_sub output part...
    printf("matrix_A - matrix_B:\n");
    for(i=0; i<row; i++){
             printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",matrix_sub[i][j]);
        }
        printf("\n");
    }

    getchar() ;
}
