#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, power;
    char op;
    printf("Enter an operator:");
    scanf("%c", &op);
    printf("Enter two operands:");
    scanf("%d %d", &x, &y);
    power = pow(x, y);
    (op == '+') ? (printf("sum=%d", x + y)) : (op == '-') ? (printf("minus=%d", x - y))
                                          : (op == '*')   ? (printf("multiplication=%d", x * y))
                                          : (op == '/')   ? (printf("division=%d", x / y))
                                          : (op == '^')   ? (printf("power=%d", power))
                                                          : (printf("This is not a valid operator"));
    return 0;
}