#include<stdio.h>
int main()
{
    int n; //user number
    int i; //declearation
    int count = 0 ; //if change this , that will be prime

    printf("Enter You number for check prime number:");
    scanf("%d",&n);

    for(i = 2; i < n ; i++){
        if(n%i==0){
            count++;
            break ;
        }
    }




    if(count==0){
        printf("%d is prime number :)",n);
    }else{
        printf("%d is not prime number :(",n);
    }


    getchar();
}
