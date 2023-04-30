#include<stdio.h>
int main()
{
    int i=1; // loop declearation and initialization
    int fact = 1; //factorial value pre set
    int n ;       //input user number

    printf("Enter n! factorial number:");
    scanf("%d",&n);

    do{
        fact = fact * i;
        i++ ;
    }while(i<=n);

    printf("%d! = %d \n",n,fact);
}
