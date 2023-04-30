#include<stdio.h>
int main(){
 int i,sum = 0,n;
 printf("how many number:");
 scanf("%d",&n);
 int a[n];
 printf("type %d number:",n);
 for(i=0; i<n; i++)
 {
     scanf("%d",&a[i]);
     sum = sum + a[i] ;
 }

     printf("sum = %d\navg=%.1f\n",sum,(float)sum/n);


}
