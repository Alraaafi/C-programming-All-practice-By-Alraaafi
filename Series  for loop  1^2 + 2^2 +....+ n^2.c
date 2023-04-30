//Series  for loop  1^2 + 2^2 +....+ n^2.c
#include<stdio.h>
int main(){
    int sum=0,i,n;
    printf("enter nth num for serise:");
    scanf("%d",&n);
  for(i=1;i<=n; i++){
        sum = sum+i*i;
    }
    printf("1^2 + 2^2 +....+ n^2%d=%d",n,sum);
}
