//(1*2*3)+(2*3*4)+(3*4*5)+....+(n1*n2*n3)=? with while loop


#include<stdio.h>
int main()
{
    int sum = 0; //cause it's sum of series

    int i = 1;
    int j = 2;
    int k = 3;

    int n1,n2,n3;

    printf("Enter last n1, n2, n3  seres value:");
    scanf("%d %d %d",&n1, &n2, &n3);


        do{
        sum = sum + (i*j*k);
        i = i + 1;
        j = j + 1;
        k = k + 1;
    }while(i<=n1 && j<=n2 && k<=n3);



    printf("(1*2*3)+(2*3*4)+(3*4*5)+....+(%d*%d*%d)=%d",n1,n2,n3,sum);

    getchar();

}
