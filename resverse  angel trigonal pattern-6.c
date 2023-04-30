#include<stdio.h>
int main() {
printf("Case 1:%6d\n",9876);
/* Prints the number right justified within 6 columns */ printf("Case 2:%3d\n",9876); /* Prints the number to be right justified to 3 columns but, there are 4 digits so number is not right justified */ printf("Case 3:%.2f\n",987.6543);
/* Prints the number rounded to two decimal places */ printf("Case 4:%.f\n",987.6543); /* Prints the number rounded to 0 decimal place, i.e, rounded to integer */ printf("Case 5:%e\n",987.6543); /* Prints the number in exponential notation (scientific notation) */ return 0;
}
