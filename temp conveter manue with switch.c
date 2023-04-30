#include<stdio.h>
int main()
{   int dicision;
    float c,f,convertF,convertC;

    printf("temparature converter manu: \n");
    printf("Press 1 for celcius to ferhenhite \n");
    printf("Press 2 for ferhenhite to to celsias \n");
    scanf("%d",&dicision);
    switch(dicision){
        case 1:
            {
                printf("entre celcious temp for far:");
                scanf("%f",&c);
                convertF = (1.8*c)+32;
                printf("%.0f degree celsious to ferhenhite is %.0f",c,convertF);
                break ;
            }
    case 2:
            {
                printf("entre ferhenhite temp for celcious:");
                scanf("%f",&f);
                convertC = (f-32)/1.8;
                printf("%.0f degree farhenhite to celsiouss is %.0f",f,convertC);
                break ;
            }
    default :
        printf("Invalid statment");
    }


}

