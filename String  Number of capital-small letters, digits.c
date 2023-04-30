#include<stdio.h>
int main()
{
    char ch,str[50];
    int i, small, capital,digits;
    printf("Enter string for Counting analyses: ");
    gets(str);

    small = capital = digits = 0;

    for(i=0; (ch=str[i])!='\0'; i++){
        if(ch>=97 && ch<=122)
            small++;
        else if(ch>=65 && ch<=90 )
            capital++;
        else if(ch>=48 && ch<=57)
            digits++;
    }

    printf("\n\nNumber of samll letters is: %d \n",small);
    printf("Number of capital letters is: %d \n",capital);
    printf("Number of digits is: %d \n",digits);
    getchar();
    return 0;
}
