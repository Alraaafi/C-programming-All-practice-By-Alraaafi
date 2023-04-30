#include<stdio.h>
int main()
{
  char st[30];
  printf("Enter Your full Name:");
  gets(st); //scanf can not read after space so used gets that's mean get string
  printf("Your Name is = %s",st);
}
