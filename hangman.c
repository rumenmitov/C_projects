#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char sign;

    printf("Basic calculator!\n");
    printf("Enter first number:\n");
    scanf("%lf", &num1);
    printf("Choose operation ( + , - , * or /)\n");
    scanf(" %c", &sign);
    printf("Enter second number:\n");
    scanf("%lf", &num2);

    if (sign == '+')
    {
        printf("Answer: %f\n", num1 + num2);
    } else if (sign == '-')
    {
        printf("Answer: %f\n", num1 - num2);
    } else if (sign == '*')
    {
        printf("Answer: %f\n", num1 * num2);
    } else if (sign == '/')
    {
        printf("Answer: %f\n", num1 / num2);
    } else
    {
        printf("Invalid operator\n");
    }
}
