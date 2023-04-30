#include<stdio.h>
double triArea(double b,double h);
int main(){
    double base,height;
    printf("Enter base and height:");
    scanf("%lf %lf",&base,&height);
    double area = triArea(base,height);
    printf("The area is : %.lf",area);
}
    double triArea(double b,double h){
        return .5 * b * h;
    }

