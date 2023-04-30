#include<stdio.h>

int add(int num1,int num2,int num3){
    return num1 + num2 + num3 ;
}
int main()
{
    int a,b,c;
    printf("enter 3 num for sum:");
    scanf("%d%d%d",&a,&b,&c);
    printf("SuM is: %d",add(a,b,c));
}

