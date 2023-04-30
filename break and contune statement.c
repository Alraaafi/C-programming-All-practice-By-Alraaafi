
#include<stdio.h>
int main()
{
    for(int i =1;i<30; i++)
    {

        if(i%2 != 0) //condition just for continue staement
            continue; //bypass or condition number skip


        printf("NUMBER-%d \n",i); //staements


        if(i==16) //condition just for break staement
        break; //if condition is true, the loop has been terminated
    }
    getchar();
}
/*
2
4
6
8
10
12
14
*/
