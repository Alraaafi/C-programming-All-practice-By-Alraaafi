#include<stdio.h>
int main()
{
  char str1[] = "Tanvir Ahmed";
  char str2[] = "Bangladesh Rafi";
  char strReverse[50];
  int i,strNum=0,count=0;
  printf("Before string reverse: %s\n",str1);

  //prosess 1(use libarary funtion):
  strrev(str1);
  printf("After string reverse(use lib): %s\n",str1);

  //prosess 2(without libarary funtion):
  printf("Before string reverse: %s\n",str2);
  for(i=0; str2[i]!='\0'; i++){
    strNum++;
  }

  for(i=strNum-1; i>=0; i--){
    strReverse[count] = str2[i];
    count++;
  }
  printf("After string reverse(without lib): %s\n",strReverse);
}
