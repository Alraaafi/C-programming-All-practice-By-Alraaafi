#include<stdio.h>
int main()
{
    //initialization:
    int row,col,i,j,upperSum=0,lowarSum=0;

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


    //upper and lower sum process of matrix A:***
     for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i<j) upperSum = upperSum + A[i][j];
            if(i>j) lowarSum = lowarSum + A[i][j];
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


    //upperSum and lowerSum  output:
   printf("Matrix A upperSum is = %d\n",upperSum);
  printf("Matrix A lowarSum is = %d\n",lowarSum);
    getchar() ;
}
