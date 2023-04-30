
/*
Step 1: Input NAME,OVERTIME,ABSENT
Step 2: if (OVERTIME–(2/3)*ABSENT > 40) then
PAYMENT  50
else if (OVERTIME–(2/3)*ABSENT > 30) then
PAYMENT  40
else if (OVERTIME–(2/3)*ABSENT > 20) then
PAYMENT  30
else if (OVERTIME–(2/3)*ABSENT > 10) then
PAYMENT 20
else 
PAYMENT  10
endif
Step 3: Print “Bonus for”, NAME “is $”, PAYMENT
*/
#include<stdio.h>
int main(){
    int NAME,OVERTIME,ABSENT,time ;
    time = OVERTIME-(2/3)*ABSENT ;
    if (time>40)
    {
        printf("PAYMENT : 50");
    }else if (time>30)
    {
        printf("PAYMENT : 40");
    }else if (time>20)
    {
        printf("PAYMENT : 30");
    }else if (time>10)
    {
        printf("PAYMENT : 20");
    }else
    {
        printf("PAYMENT : 10");
    }
    
    
    
}