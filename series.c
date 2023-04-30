#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last seres value:");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i=i+2)
        {
        sum = sum + i ;//n=7(16) so 1,4,9,
        //printf("%d \n",i);
    }
    printf("1+3+5+7...+%d=%d",n,sum);

}
