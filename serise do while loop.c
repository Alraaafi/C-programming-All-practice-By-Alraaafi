//3+7+11+....+N=?


#include<stdio.h>
int main()
{
    int n,i=3;
    int sum=0;
    printf("Enter last seres value:");
    scanf("%d",&n);
    printf("3+7+11+....+%d=",n);
    do{
        sum = sum + i ;
        i = i + 4;
    }
    while(i<=n);
    printf("%d \n",sum);

}
