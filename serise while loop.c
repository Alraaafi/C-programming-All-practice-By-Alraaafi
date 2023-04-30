//3+7+11+....+N=?


#include<stdio.h>
int main()
{
    int n,i=3;
    int sum=0;
    printf("Enter last seres value:");
    scanf("%d",&n);
    printf("3+7+11+....+%d=",n);
    while(i<=n)
        {
        sum = sum + i ;
        i = i + 4;
    }
    printf("%d \n",sum);

}
