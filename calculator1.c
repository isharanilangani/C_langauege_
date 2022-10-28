#include <stdio.h>

int main() {

  //create local variables
  char op;
  double n1, n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);//add two numbers
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);//substarction two numbers
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);//multiplication two numbers
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);//divishion two numbers
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
