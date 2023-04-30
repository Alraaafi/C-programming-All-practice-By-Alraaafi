#include<stdio.h>
//Global structure:
struct detalis{
    int year;
    float value;
};

//struct detalis info1,info2; //global variable

int main(){
    struct detalis info1={2020,4.5},info2; //local variable

    info2  = info1; //structure variable assignment

    printf("\tdetails 1:\n");
    printf("year is : %d \n",info1.year);
    printf("value is : %f \n",info1.value);

    printf("\n\n\tdetails 2:\n");
    printf("year is : %d \n",info2.year);
    printf("value is : %f \n",info2.value);

}
