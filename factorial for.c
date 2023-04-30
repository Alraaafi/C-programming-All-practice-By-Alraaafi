#include<stdio.h>
int main()
{
    int i; // loop declearation
    int fact = 1; //factorial value pre set
    int n ;       //input user number

    printf("Enter n! factorial number:");
    scanf("%d",&n);

    for(i=1; i <= n; i++){
        fact = fact*i;
    }
    printf("%d! = %d \n",n,fact);
}
