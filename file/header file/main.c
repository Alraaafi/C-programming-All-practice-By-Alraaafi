#include <stdio.h>
#include "myFile.h"
int main()
{
    //header file- function:
    printf("\t\tUsing function:\n");
    int sm = sum(4,6);
    printf("summation is = %d\n",sm);


    //header file- preprocessor:
    printf("\n\t\tUsing preprocessor:\n");
    printf("my Name is = %s\n",NAME);
    printf("PI value is = %.4f\n",PI);


    ////header file- Structure:
    printf("\n\t\tUsing Structure:\n");
    struct info student1, student2 = {2020,4.5};
    student1.year = 2021;
    student1.pin  = 5.00;
    printf("student-1 passing Year: %d\n",student1.year);
    printf("student-1 Grad: %.2f\n",student1.pin);
    printf("student-2 passing Year: %d\n",student2.year);
    printf("student-2 Grad: %.2f\n",student2.pin);


    ////header file- Union:
    printf("\n\t\tUsing Union:\n");
    union myinfo rafi;
    rafi.age = 20;
    rafi.height = 5.4;
    printf("my age = %d\n",rafi.age);
    printf("My Height = %.1f\n",rafi.height);

}
