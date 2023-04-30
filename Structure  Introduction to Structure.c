#include<stdio.h>
//Global structure:
struct detalis{
    int year;
    char DO;
    float value;
};

struct detalis info1,info2; //global variable

int main(){
    //struct detalis info1,info2; //local variable

    info1.year = 2020;
    info1.DO = 'Y';
    info1.value= 3.1416;

    info2.year = 2023;
    info2.DO = 'N';
    info2.value= 9.8;

    printf("\tdetails 1:\n");
    printf("year is : %d \n",info1.year);
    printf("DO is : %c \n",info1.DO);
    printf("value is : %f \n",info1.value);


    printf("\n\n\tdetails 2:\n");
    printf("year is : %d \n",info2.year);
    printf("DO is : %c \n",info2.DO);
    printf("value is : %f \n",info2.value);

}
