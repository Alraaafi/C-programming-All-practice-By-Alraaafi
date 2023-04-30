#include<stdio.h>
int main()
{
  char st[5];
  st[0] = 'R';
  st[1] = 'A';
  st[2] = 'F';
  st[3] = 'I';
  st[4] = '\0'; //EnSure end of the string


  //or
  //char st[5] = {'R','A','F','I'};

  //OR
  //char st[] = "RAFI";

  printf("st is = %s",st);
}
