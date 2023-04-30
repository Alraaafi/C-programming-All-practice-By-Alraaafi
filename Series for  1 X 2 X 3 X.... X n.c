//for loop  Series  2^2 X 4^2 X 6^2 X.... X n^2=?
#include<stdio.h>
int main(){


    int mal=1,i,n;
    printf("enter nth num for maltiple square even serise:");
    scanf("%d",&n);


  for(i=2;i<=n; i=i+2){
        sum = sum+(1/i);
    }


    printf("=%f",sum);


}
