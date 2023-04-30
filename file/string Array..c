#include <stdio.h>
int main()
{
    char *weeks[7] = {"sat","sun","mon","tue","wed","thu","fri"};
    for(int i=0; i<7; i++){
        printf("%s\t",weeks[i]);
    }
}
