#include<stdio.h>
int main()
{
    char name[100];
    int i=0;
    printf("enter your name:    ");
    gets(name);
    printf("The character of each word:");
    while(name[i]!='\0'){
        printf("\n%c",name[i]);
        i++ ;
    }
}
