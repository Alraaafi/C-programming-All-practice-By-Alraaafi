#include<stdio.h>
#include<math.h>
int main(){
    double a1,a2,b1,b2,c1,c2,d1,d2;
    a1 = round(2.4); //round is .5+ is add one in integer either that number will be
    a2 = round(2.6);

    b1 = trunc(5.987654321);  //trunc is remove after point (.) number
    b2 = trunc(0.789);

    c1 = ceil(10.33); //ceil is (x.something) add +1 to x in number line
    c2 = ceil(-5.99);

    d1 = floor(10.66);//floor is (x.something) substaraction -1 to x in number line
    d2 = floor(-9.12);

    printf("the round(%lf) num is: %lf \n",2.4,a1);
    printf("the round(%lf) num is: %lf \n",2.6,a2);

    printf("the trunc(%lf) num is: %lf \n",5.987654321,b1);
    printf("the trunc(%lf) num is: %lf \n",0.789,b2);

    printf("the ceil(%lf) num is: %lf \n",10.33,c1);
    printf("the ceil(%lf) num is: %lf \n",-5.99,c2);

    printf("the floor(%lf) num is: %lf \n",10.66,d1);
    printf("the floor(%lf) num is: %lf \n",-9.12,d2);
}
