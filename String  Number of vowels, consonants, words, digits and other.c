#include<stdio.h>
int main()
{
    char ch,str[50];
    int i,Number, vowels, consonants, words, digits, otherCh;
    printf("Enter string for Counting analyses: ");
    gets(str);

    Number = vowels = consonants = words = digits = otherCh = 0;

    for(i=0; (ch=str[i])!='\0'; i++){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
            vowels++;
        else if(  (ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z' )  )
            consonants++;
        else if(ch>='0' && ch<='9')
            Number++;
        else if(ch==' ')
            words++;
        else otherCh++;
    }
    words++;

    printf("\n\nNumber of Number is: %d \n",Number);
    printf("Number of vowels is: %d \n",vowels);
    printf("Number of consonants is: %d \n",consonants);
    printf("Number of words is: %d \n",words);
    printf("Number of others is: %d \n",otherCh);

    getchar();
    return 0;
}
