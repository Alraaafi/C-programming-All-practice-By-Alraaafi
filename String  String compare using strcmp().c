#include<stdio.h>
int main()
{
    char str1[] = "yes";
    char str2[] = "yes";
    int Y_N;
    Y_N = strcmp(str1,str2);
    if(Y_N==0) printf("Equal\n");
    else printf("NOT!!! Equal\n");



}
