#include<stdio.h>
int main(){
	int n1,n2,num1,num2,rem,g;
	printf("Enter 2 number:");
	scanf("%d %d",&num1,&num2);
	n1 = num1;
	n2 = num2;
	while(n2!=0){
        rem = n1%n2;
        n1 = n2 ;
        n2 = rem ;
	}
    g = n1;
    printf("lcd=%d\n",g);
    printf("gcd=%d\n",(num1*num2)/g);
}
