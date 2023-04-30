#include<stdio.h>

//structure:
struct identity{
    char name[20];
    int age ;
};

//Function:
void Display(struct identity ShowMan){
    printf("\t\t\t\t\t\tName is : %s\n",ShowMan.name);
    printf("\t\t\t\t\t\tAge is : %d\n",ShowMan.age);
}

int main(){
    struct identity man1;
    strcpy(man1.name,"Tanvir Ahmed");
    man1.age = 20;

    Display(man1);

    getchar();

}
