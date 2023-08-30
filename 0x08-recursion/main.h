#ifndef MAIN_H
#define MAIN_H

/*Function to print a character*/
int _putchar(char c);
/*Function that prints a string*/
void _puts_recursion(char *s);
/*Function to print a string in reverse*/
void _print_rev_recursion(char *s);
/*Function that returns the length of a string*/
int _strlen_recursion(char *s);
/*Function that return factorial number*/
int factorial(int n);
/*Function that returns the value of x raised to the power of y*/
int _pow_recursion(int x, int y);
/*Function that returns the natural square root of a number*/
int _sqrt_recursion(int n);
/*Function that returns 1 if the input integer is a prime number and 0 if not*/
int is_prime_number(int n);
/*Function that returns 1 if a string is a palindrome and 0 if not*/
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */

