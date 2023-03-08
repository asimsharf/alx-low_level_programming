#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *string);
void _print_rev_recursion(char *string);
int _strlen_recursion(char *string);
int factorial(int number);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int number);
int is_prime_number(int number);
int find_strlen(char *string);
int check_palindrome(char *string, int length, int index);
int is_palindrome(char *string);
int strlen_no_wilds(char *string);
void iterate_wild(char **wildstr);
char *postfix_match(char *string, char *postfix);
int wildcmp(char *string1, char *string2);
int find_sqrt(int number, int root);
int is_divisible(int number, int divisor);

#endif
