#include <stdio.h>
#include<unistd.h>
//#include<conio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#define fixd 5
int main()
{
    int hour,h,minute,m,second,s;
    printf("Hour:Minute:Second =");
    scanf("%d%d%d",&hour,&minute,&second);

    //clrscr();
    h=m=s=0;
    while(1){
        printf("%.2d : %.2d : %.2d \n",h,m,s);

        if(hour == h && minute == m && second == s) break;
       // else ;

        sleep(1); //peramiter is for second
        clrscr();
        s++;
        if(s == fixd){
            s = 0;
            m++;
        }
        if(m == fixd){
            m = 0;
            h++;
        }
    }


}

