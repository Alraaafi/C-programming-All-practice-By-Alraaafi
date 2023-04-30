#include<stdio.h>
int main()
{
    FILE *fileRead;
    fileRead = fopen("file-7.txt","r"); //r for read

    char info[200];

    if(fileRead==NULL) printf("Not exist!!\n");
    else
    {
        printf("file is safely opened:\n");

        while(!feof(fileRead)){
                //fgets(Variable,Size,File_Pointer_Name);
            fgets(info,100,fileRead);
            printf("%s",info);
        }

        fclose(fileRead);
    }

}
