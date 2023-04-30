#include<stdio.h>
int main(){
 int i,sum = 0,n,max,min;
 printf("how many number:");
 scanf("%d",&n);
 int a[n];
 printf("type %d number:",n);
 for(i=0; i<n; i++)
 {
     scanf("%d",&a[i]);
     if(i==0){
        max = a[i];
        min = a[i];
     }
     if(max < a[i]) max = a[i];
     if(min > a[i]) min = a[i];
 }

     printf("max = %d\min=%d\n",max,min);


}
