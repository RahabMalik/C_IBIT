#include <stdio.h>
#include <math.h>
int main()
{
  int x, y, sum, minus, multiply, div, power, modulus;
  char op;
  printf("Enter an operator:");
  scanf("%c", &op);
  printf("Enter 1st number:");
  scanf("%d", &x);
  printf("Enter 2nd number:");
  scanf("%d", &y);

  switch (op)
  {
  case '+':
  {
    sum = x + y;
    printf("Sum=%d", sum);
    break;
  }
  case '-':
  {
    minus = x - y;
    printf("Minus=%d", minus);
    break;
  }
  case '*':
  {
    multiply = x * y;
    printf("multiplication=%d", multiply);
    break;
  }
  case '/':
  {
    if (y == 0)
    {
      printf("Take 2nd number other than 0");
      scanf("%d", &y);
      div = x / y;
      printf("Division=%d", div);
    }
    else
    {
      div = x / y;
      printf("Division=%d", div);
    }
    break;
  }
  case '^':
  {
    power = pow(x, y);
    printf("power=%d", power);
    break;
  }
  case '%':
  {
    modulus = x % y;
    printf("Modulus=%d", modulus);
    break;
  }
  default:
    printf("ERROR! Operator is incorrect");
  }
  return 0;
}