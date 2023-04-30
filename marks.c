#include<stdio.h>
int main()
{
    float mark ;
    printf("enter your result of marks:");
    scanf("%f",&mark);
    if(mark>=80 && mark <= 100)
        printf("A+");
    else if(mark>=70)
        printf("A");
    else if(mark>=60)
        printf("A-");
    else if(mark>=50)
        printf("B");
    else if(mark>=40)
        printf("C");
    else if(mark>=33)
        printf("D");
    else if(mark<=32)
        printf("Fail");
    else
        printf("Invalid");
}

