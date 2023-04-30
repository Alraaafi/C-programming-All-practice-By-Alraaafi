#include<stdio.h>
int main()
{
    int gcd,lcm,num1,num2,n1,n2,reminder;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);

    n1 = num1;
    n2 = num2;

    while(n2!=0){
        reminder = n1%n2;
        n1 = n2 ;
        n2 = reminder;
    }
    gcd = n1 ;
    lcm = (num1 * num2)/gcd ;
    printf("gcd is %d \n lcm is %d ",gcd,lcm);
}
