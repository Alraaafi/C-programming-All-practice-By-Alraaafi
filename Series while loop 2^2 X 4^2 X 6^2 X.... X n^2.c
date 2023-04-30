//for loop  Series  2^2 X 4^2 X 6^2 X.... X n^2=?
#include<stdio.h>
int main(){


    int malti=1,i=2,n;
    printf("enter nth num for maltiple square even serise:");
    scanf("%d",&n);


  while (i<=n){
        malti = malti * (i*i);
        i=i+2;
    }


    printf("2^2 X 4^2 X 6^2 X.... X %d^2=%d",n,malti);


}
