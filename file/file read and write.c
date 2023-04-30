#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptrFile;
    int i;
    ptrFile = fopen("cada.txt", "r+");
    if (ptrFile == NULL)
        printf("file is not created");
    else
    {
        printf("File Created Successfully\n");

        /*
        char nam[20];
        int ammount;
        for(i=1; i<=3; i++){
        scanf("%s %d",nam,&ammount);
        fprintf(ptrFile,"%s %d\n",nam,ammount);
        }
        */

        int s=0;
        while(1){
        char b[20];

        int ck = fscanf(ptrFile,"%s",b);
        if(ck==EOF) break;
        printf("%s ",b);

        ck = fscanf(ptrFile,"%s",b);
        if(ck==EOF) break;
        printf("%s\n",b);

        s = s + atoi(b);
        }
        printf("total = %d\n",s);

    }

    fclose(ptrFile);
}
