#include<stdio.h>
int main(){
FILE *myFile;
myFile = fopen("file-1.txt","w");

if(myFile==NULL){
    printf("file Does not created");
}
else{
    printf("file created");
}
fclose(myFile);
}
