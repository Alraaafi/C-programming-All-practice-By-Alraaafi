#include <stdio.h>
int main()
{
    FILE *ptrFile;
    int i,v,c,s;
    v=c=s = 0;
    char ch;
    ptrFile = fopen("myfile.txt", "r");
    if (ptrFile == NULL)
        printf("file is not created");
    else
    {
        printf("File Created Successfully\n");
        while(1){
            ch = getc(ptrFile);
            printf("%c",ch);
            if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u') v++;
            else if(ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') v++;
            else if(ch==' ') s++;
            else c++;

            if(ch==EOF) break;
        }
        printf("\nvowel:%d\n",v);
        printf("speace:%d\n",s);
        printf("consonant:%d\n",c);

    }

    fclose(ptrFile);
}
