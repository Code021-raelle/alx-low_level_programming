#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return - Always 0 (Success)
 */
int main(void))
{
  /*
   * indicates successful program executiom
   */
int number;

for (number = 0; number <= 9; number++)
{
putchar(number + '0');
if (number < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

/*
 * Description: return value 0 signifies no errors
 */
return (0);
}
