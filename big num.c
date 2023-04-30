#include<stdio.h>
int main(){
    int n1, n2 ;
    printf("enter 1st num:");
    scanf("%d",&n1);
    printf("enter 2nd num:");
    scanf("%d",&n2);
    if(n1>n2)
        printf("%d num is big",n1);
    else if(n1<n2)
        printf("%d num is big",n2);
    else
        printf("%d and %d num is Equal",n1,n2);

}

