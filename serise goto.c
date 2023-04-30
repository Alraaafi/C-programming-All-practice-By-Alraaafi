//3+7+11+....+N=?


#include<stdio.h>
int main()
{
    int n,i=3;
    int sum=0;
    printf("Enter last seres value:");
    scanf("%d",&n);

    rafiS:
        sum = sum + i ;
        i = i + 4;
    if(i<=n){
        goto rafiS;
    }
    printf("3+7+11+....+%d=%d",n,sum);

}
