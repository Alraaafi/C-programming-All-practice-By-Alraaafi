#include<stdio.h>
int main(){
    FILE *student;

    int i,n,year;
    long long unsigned int phone;
    char name[20];
    float gpa;

    student = fopen("Student Result.txt","a"); //a for append

    if(student==NULL) printf("file does Not Exist!!\n");
    else{
        printf("file Have been Exist!!\n");
        printf("Enter Total Students Data: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++){
            printf("Enter Students-%d Name: ",i);
            scanf("%s",name);

            printf("Enter Students-%d Passing Year: ",i);
            scanf("%d",&year);

            printf("Enter Students-%d GPA: ",i);
            scanf("%f",&gpa);

            printf("Enter Students-%d Phone Number: ",i);
            scanf("%llu",&phone);


            //fputc("\n",student);
            fprintf(student,"\n%s     %d  %.2f    %llu",name,year,gpa,phone);

            printf("\n\n");
        }
        printf("File is Successfully Inserted!!!\n");
        fclose(student);
    }
    getch();
}
