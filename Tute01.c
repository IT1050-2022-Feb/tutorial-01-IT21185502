/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1,num2;
  float AVG;

  printf("Enter Num1 = ");
  scanf("%d",&num1);

  printf("Enter Num2 = ");
  scanf("%d",&num2);

  AVG=(num1+num2)/2;

  printf("AVG Is = %.2f",AVG);

  
  return 0;
}

