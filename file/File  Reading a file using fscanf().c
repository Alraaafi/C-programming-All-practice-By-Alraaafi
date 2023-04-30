#include<stdio.h>
int main()
{
    FILE *read;
    read = fopen("file-8.txt","r");

    char firstName[10];
    char lastName[10];
    int age;

    if(read==NULL) printf("Not Exist!!!");
    else{
        printf("file exist!!\n");

        //fscanf(Pointer_Name,"Formate_Speacifires%...",Variables_Names,..,..,);
        fscanf(read,"%s %s %d",firstName,lastName,&age);
        printf("%s %s %d",firstName,lastName,age);

        fclose(read);
    }
    getch();
}
