#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr1, *ptr2;

    //Use of malloc()
    ptr1 = (int*)malloc(40); //or malloc(10*typeof(int)) //all number use for  byte

    //Use of calloc()
    ptr2 = (int*)calloc(5,sizeof(int)); //or calloc(5,4) total size is 4*5=20

    if(ptr1==NULL && ptr2==NULL) printf("NOT Allocated Any\n");
    else{
        printf("All pointer memory allocation successfully\n");

        //Use of realloc()
        ptr2  = realloc(ptr2,50);
        printf("pointer-2 Re-allocation successfully\n");

        //Use of free()
        free(ptr1);
        printf("pointer-1 free memory successfully\n");
    }

}
