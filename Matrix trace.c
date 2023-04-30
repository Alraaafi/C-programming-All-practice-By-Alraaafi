#include<stdio.h>
int main()
{
    //initialization:
    int row,col,i,j,t,sum=0;

    //DIMANTION:
    printf("Enter A matrix Dimantion:");
    scanf("%d%d",&row,&col);
    int A[row][col];

    //A matrix inputing:
    printf("Do input A matrix elements:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
                printf("A[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    //Transpose process of matrix A:***
     for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==j) sum = sum + A[i][j];
        }
    }








    //A matrix output:
    printf("\n");
    printf("MATRIX A =\n");
    for(i=0; i<row; i++){
            printf("\t\t");
        for(j=0; j<col; j++){
                printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //trace matrix output:
   t = sum;
   printf("Matrix A trace is = %d",t);

    getchar() ;
}
