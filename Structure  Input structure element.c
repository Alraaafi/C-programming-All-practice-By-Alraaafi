#include<stdio.h>
//Global structure:
struct detalis{
    int year;
    char ch;
    float value;
};

struct detalis info1,info2; //global variable

int main(){
    //struct detalis info1,info2; //local variable

    printf("Enter Information for details 1:\n");

    printf("ch: ");
    scanf("%c",&info1.ch);

    printf("Year: ");
    scanf("%d",&info1.year);

    printf("Value: ");
    scanf("%f",&info1.value);


    printf("\tdetails 1:\n");
    printf("year is : %d \n",info1.year);
    printf("ch is : %c \n",info1.ch);
    printf("value is : %f \n",info1.value);


    printf("Enter Information for details 2:\n");
    printf("ch: ");
    scanf("%c",&info2.ch);
    printf("Year: ");
    scanf("%d",&info2.year);
    printf("Value: ");
    scanf("%f",&info2.value);


    printf("\n\n\tdetails 2:\n");
    printf("year is : %d \n",info2.year);
    printf("ch is : %c \n",info2.ch);
    printf("value is : %f \n",info2.value);

}
