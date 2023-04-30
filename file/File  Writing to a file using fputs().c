#include<stdio.h>
int main()
{
    FILE *my;
    char University[100] ;

    my = fopen("file-4.txt","a");

    if(my==NULL) printf("Not exist!!\n");
    else
    {
        printf("file is created succsessful!!\n");

        printf("Enter your University for putting the file: ");
        gets(University);

        fputs(University,my);
        fputs("\n",my);

        printf("file operation Done!");

        fclose(my);
    }

}
