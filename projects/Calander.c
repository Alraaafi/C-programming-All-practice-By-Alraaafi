#include <stdio.h>
int startDay(int Year)
{
    int start = (   Year*365 + ((Year-1)/4)-((Year-1)/100)+((Year-1)/400))%7;
    return start;
}
int main()
{
    int i,j,year,space=0,weekend=0,lastDay[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *months[12] = {"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULAY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    printf("Enter Year for Calender:");
    scanf("%d",&year);

    weekend = startDay(year);

    if( (year%4==0 && year%100!=0) || year%400==0 )
    {
        lastDay[1]=29;
    }
    printf("\n\n********************< %d >********************\n",year);
    for(i=0; i<12; i++)
    {
        printf("\n....................%s....................\n",months[i]);
        printf("\n    SUN    MON    TUE    WED    THU    FRI    SAT\n\n");
        for(space=1; space<=weekend; space++)
        {
            printf("       ");
        }
        for(j=1; j<=lastDay[i]; j++)
        {
            printf("%7d",j);
            weekend++;
            if(weekend>6)
            {
                weekend=0;
                printf("\n");
            }
        }
    }
}

