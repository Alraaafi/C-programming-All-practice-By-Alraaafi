#include<stdio.h>);

void DisplayStr(char s[]){
    int i;
    for(i=0; s[i]!='\0'; i++){
        printf("%c\n",s[i]);
    }
}


int main(){
    char strg[]="BANGLADESH";
    DisplayStr(strg);
}

