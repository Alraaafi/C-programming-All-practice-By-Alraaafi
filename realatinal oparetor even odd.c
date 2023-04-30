#include<stdio.h>
int main(){
// realatonal opareator are: ==,!=, >, <, >=, <=
//control steatment are two type. 1. loop and 2. condition
int num ;
printf("Enter a num for even odd:");
scanf("%d",&num);
if(num%2 == 0)
    printf("%d is Even number",num);
else //if(num%2 != 0)
    printf("%d is Odd number",num);

}
