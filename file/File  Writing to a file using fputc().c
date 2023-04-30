#include<stdio.h>
int main(){
FILE *myFile;
char myName[] = "Tanvir Ahmed ";
int i;

myFile = fopen("file-2.txt","a"); //a for next add , w for re-write

if(myFile==NULL){
    printf("file Does not created\n");
}
else{
    printf("file created\n");
    for(i=0; i<strlen(myName); i++){
        fputc(myName[i],myFile);
    }
    printf("your operation is Successfully done!!!\n");
}
fclose(myFile);
}
