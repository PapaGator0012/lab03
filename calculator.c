/**
 * Author:Syed Hassam Jan 
 * Date: 10/22/2023 
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("%f", a + b);
  } else if(choice == 2) {
    result = a - b;
    printf("%f", result);
  } else if(choice == 3) {
    printf("%f x %f = %f"a,b,a*b);
  } else if(choice == 4) {
    printf("%f divided %f = %f"a,b,a/b);
  } else if(choice == 5) {
     if (a>b){
      printf("a %f is greater than b %f",a,b);
     }
     else 
     printf("b %f is greater than a %f",b,a);
  } else if(choice == 6) {
    double logres = log(a)*b;
    printf(" %lf ",logres);
  } else {
    printf("Please input a valid operator next time");
  }

  return 0;
}
