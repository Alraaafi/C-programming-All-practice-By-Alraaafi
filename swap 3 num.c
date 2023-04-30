#include<stdio.h>
int main()
{
    int temp, a = 10, b = 20, c = 30;

    temp = b;
    b = a;
    a = c;
    c = temp;

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}
