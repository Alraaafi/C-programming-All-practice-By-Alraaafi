#include<stdio.h>
int main()
{
    char orginalStr[] = "MADAM2";
    char revStr[50];
    int i,j,len=0,strCompare;
    for(i=0; orginalStr[i]!='\0'; i++) len++;
    for(i=0,j=len-1; i<len,j>=0; i++,j--) revStr[i]=orginalStr[j];


    printf("orginal string is: %s\n",orginalStr);
    printf("reverse string is: %s\n",revStr);
}
