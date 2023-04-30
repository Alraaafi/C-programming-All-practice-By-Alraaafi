#include<stdio.h>
int main()
{
    char name[] = "Tan vir";
    int size,i,count=0;

    //process 1:
    size = strlen(name);
    printf("process 1 lenath is = %d\n",size);

    //process 2:
    for(i=0; name[i]!='\0'; i++){
        count++;
    }
    printf("process 2 lenath is = %d\n",count);
}
