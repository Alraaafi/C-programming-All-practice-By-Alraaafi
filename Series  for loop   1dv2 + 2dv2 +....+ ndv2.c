//Series  for loop  1/2 + 1/2 +....+ 1/n=?
#include<stdio.h>
int main(){
    float sum=0,i,n;
    printf("enter 1/nth num for serise:");
    scanf("%f",&n);
  for(i=1;i<=n; i++){
        sum = sum+(1/i);
        if(i==1)
            printf("\n 1/%f+...",i);
        else if(i==n)
            printf("...+ 1/%f",i);
    }
    printf("=%f",sum);
}
