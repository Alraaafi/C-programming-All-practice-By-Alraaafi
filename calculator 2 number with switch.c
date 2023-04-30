#include<stdio.h>
int main()
{
    char op;
    float num1,num2;
    printf("choose a oparator(+,-,*,/) for 2 number calculation: \n");
    scanf("%c",&op);


    printf("enter  two number : \n");
    scanf("%f %f",&num1,&num2);

    switch(op){
        case '+':
            {
            printf("%.0f + %.0f = %.0f \n",num1,num2,num1 + num2);
            break ;
            }
            {

            case '-':
            printf("%.0f - %.0f = %.0f \n",num1,num2,num1 - num2);
            break ;
            }
            {
            case '*':
            printf("%.0f * %.0f = %.0f \n",num1,num2,num1 * num2);
            break ;
            }

            {

            case '/':
            printf("%.0f / %.0f = %.0f \n",num1,num2,num1 / num2);
            break ;
            }
            default :
                printf("invalid expression");
    }

}

