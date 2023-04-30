#include<stdio.h>
int main()
{
    int i = 1;

    rafi:
        printf("week of day:-%d \n",i);
        i++;
        if(i<8)
        {
            goto rafi;
        }
}
