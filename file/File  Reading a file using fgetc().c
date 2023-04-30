#include<stdio.h>
int main()
{
    FILE *fileRead;
    fileRead = fopen("file-6.txt","r"); //r for read

    char info;

    if(fileRead==NULL) printf("Not exist!!\n");
    else
    {
        printf("file is safely opened:\n");

        while(!feof(fileRead)){
            info = fgetc(fileRead);
            printf("%c",info);
        }

        fclose(fileRead);
    }

}
