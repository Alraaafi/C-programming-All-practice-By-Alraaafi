#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptrFile;
    int i, j,ln;
    char ch,arr[100] = "hello! Ajke amar mon valo nei:( ";
    ln = strlen(arr) ;
    ptrFile = fopen("myfile.txt", "r");
    if (ptrFile == NULL)
        printf("file is not created");
    else
    {
        printf("File Created Successfully\n");
        /*
        //file write process-1
            for (i = 0; i <ln; i++)
            {
                fputc(arr[i], ptrFile);
            }
            printf("File is Successfully written\n");
        */

       /*
        //file write process-2
        fputs(arr,ptrFile);
         printf("File is Successfully written\n");
         */


       /*
       //file Write process-3
       fprintf(ptrFile,"%s",arr);
       printf("File is Successfully written\n");
       */

    /*
      //file READ process-1
        i = 0 ;
        while (arr[i]!='\0')
        {
                ch = fgetc(ptrFile);
                printf("%c",ch);
                i++;

        }

        printf("\nFile is Successfully READ\n");
        */

       /*
       //file READ process-2
       char fileData[500];
       fscanf(ptrFile,"%s",fileData);
       printf("%s",fileData);
       printf("\nFile is Successfully READ\n");
       */

      //file READ process-3
      char fileData[500];
      fgets(fileData,300,ptrFile);
      printf("%s",fileData);
       printf("\nFile is Successfully READ\n");

    }

    fclose(ptrFile);
}
