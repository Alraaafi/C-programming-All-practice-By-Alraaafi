#include<stdio.h>
int main()
{
    FILE *filePointer;
    filePointer = fopen("file-5.txt","a");

    int date,month,year;

    if(filePointer==NULL) printf("Not exist!!\n");
    else
    {
        printf("file is created succsessful!!\n\n");

        printf("Enter your current date-month-year: ");
        scanf("%d%d%d",&date,&month,&year);

        fprintf(filePointer,"Date-%d / Month-%d / Year-%d\n",date,month,year);

        printf("file operation Done!");

        fclose(filePointer);
    }

}
