#include<stdio.h>
int main(){
    int A = 10 ;
    printf("first A is : %d \n",A); //Origin  of number
    printf("A-- is : %d \n",A--);   //number -1 decrease will be next time
    printf("then A is : %d \n",A);  //number -1 decrease succsessful
    printf("--A is : %d \n",--A);   //number -1 decrease on time
    printf("then A is : %d \n",A);  //already decreaded
    printf("++A is : %d \n",++A);   //number +1 increase on time
    printf("then A is : %d \n",A);  //already increased
    printf("A++ is : %d \n",A++);   //number +1 increase will be next time
    printf("A is : %d \n",A);       ////number +1 increase succsessful
}
