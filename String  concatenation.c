#include<stdio.h>
int main()
{
    char srcStr1[] = "Hi! I'm ";
    char srcStr2[] = "My name is ";
    char addStr1[]= "Tanvir";
    char addStr2[]= "Rafi";
    int i,j;

    //process 1:
    strcat(srcStr1,addStr1);
    //or strcat(srcStr,"Tanvir Ahmed rafi");
    printf("process 1:\n\t concatenation string is: %s\n",srcStr1);

    //process 2:
    for(j=0,i=strlen(srcStr2); addStr2[j]!='\0', i<(strlen(srcStr2)+strlen(addStr2));j++, i++){
        srcStr2[i] = addStr2[j];
    }
    printf("process 2:\n\t concatenation string is: %s\n",srcStr2);

}
