#include<stdio.h>
int main()
{
    //initialization:
    int row1,row2,col1,col2,i,j,k,sum=0;
    int A[20][20], B[20][20],AB[20][20];

    //DIMANTION:
    printf("Enter A matrix Dimantion:");
    scanf("%d%d",&row1,&col1);
    printf("Enter B matrix Dimantion:");
    scanf("%d%d",&row2,&col2);

    //check multiplication:
    while(col1!=row2){
        printf("ERROR!!! These matrix can not be multiplication!!!\n\nyou try again:\n");
        //DIMANTION again:
    printf("Enter A matrix Dimantion:");
    scanf("%d%d",&row1,&col1);
    printf("Enter B matrix Dimantion:");
    scanf("%d%d",&row2,&col2);
    }

    //A matrix inputing:
    printf("Do input A matrix elements:\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
                printf("A[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //B matrix inputing:
    printf("Do input B matrix elements:\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
                printf("B[%d][%d]: ",i,j);
                scanf("%d",&B[i][j]);
        }
        printf("\n");
    }







    //Multiplication process of matrix:***
    for(i=0; i<row1; i++){ //Dim of AB = 1st matrix row * 2nd matrix column
        for(j=0; j<col2; j++){
            for(k=0; k<col1; k++){ //matrix A*B condition is col A = row B ; that is K
                sum = sum + A[i][k] * B[k][j];
                AB[i][j] = sum;
            }
            sum = 0;
        }
    }







    //A matrix output:
    printf("\n");
    printf("MATRIX A =\n");
    for(i=0; i<row1; i++){
            printf("\t\t");
        for(j=0; j<col1; j++){
                printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //B matrix output:
    printf("MATRIX B =\n");
    for(i=0; i<row2; i++){
            printf("\t\t");
        for(j=0; j<col2; j++){
                printf("%d ",B[i][j]);
        }
        printf("\n");
    }



    //B matrix output:
    printf("\nMATRIX A * B =\n");
    for(i=0; i<row1; i++){
            printf("\t\t");
        for(j=0; j<col2; j++){
                printf("%d ",AB[i][j]);
        }
        printf("\n");
    }

    getchar() ;
}
