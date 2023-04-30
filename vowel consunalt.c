#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter a char:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='E' || ch=='e' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='U' || ch=='u' )
        printf("%c is vawel",ch);
    else
        printf("%c is consonant",ch);
}

