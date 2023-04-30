#include<stdio.h>
int main(){
    int a,b,c;
    a = 10 ;
    b = 15 ;
    c = 20 ;
    if(a>b){
        if (a>c)
        {
            printf("max num is: %d",a);
        }else{
            printf("max num is: %d",b);
        }
        
    }else{
        if (b>a)
        {
            printf("max num is: %d",b);
        }else{
            printf("max num is: %d",c);
        }
        
    }
}