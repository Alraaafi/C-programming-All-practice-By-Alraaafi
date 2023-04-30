#include<stdio.h>
//Global structure:
struct HscEdu{
    int year;
    float gpa ;
    char name[20];
};

int main(){
    int member,i;
    printf("Enter students number for HSC:");
    scanf("%d",&member);

   struct HscEdu student[member];

   for(i=0; i<member; i++){
        printf("\n\t Enter Student:- %d  HSC Education:\n",i+1);
        printf("Enter Name: ");
        fflush(stdin); //new string per loop
        gets(student[i].name);
        printf("Enter year: ");
        scanf("%d",&student[i].year);
        printf("Enter GPA: ");
        scanf("%f",&student[i].gpa);
   }

    for(i=0; i<50; i++) printf("*");

    for(i=0; i<member; i++){
        printf("\n\t Display Student:- %d  HSC Education:\n",i+1);
        printf("Student Name is: %s\n",student[i].name);
        printf("Passing year is: %d\n",student[i].year);
        printf("Final GPA is: %.2f\n",student[i].gpa);
    }


   getch();
   return 0;
}
