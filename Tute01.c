/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1,s2;
  float avg;
  printf("Enter marks:");
  scanf("%d",&s1);
  printf("Enter marks:");
  scanf("%d",&s2);
  avg=(s1+s2)/2.0;
  printf("Average=%.2f",avg);
  return 0;
}

