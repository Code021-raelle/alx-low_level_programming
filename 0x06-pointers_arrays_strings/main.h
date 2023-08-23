#ifndef MAIN_H
#define MAIN_H

/*Function that prints characters*/
int _putchar(char c);

/*Function that concatenates two strings*/
char *_strcat(char *dest, char *src);

/*Function concatenate two strings, but have to use at most n bytes from src*/
char *_strncat(char *dest, char *src, int n);

/*Function thay copies a string*/
char *_strncpy(char *dest, char *src, int n);

/*Function that compares two string*/
int _strcmp(char *s1, char *s2);

/*Function that reverse the content of an array of integers*/
void reverse_array(int *a, int n);
char *string_toupper(char *);

/*Function that capitalizes all words of a string*/
char *cap_string(char *);

/*Function that encodes a string into 1337*/
char *leet(char *);

/*Function that encodes a string using rot13*/
char *rot13(char *);

/*Function that peints an integer*/
void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif /* MAIN_H */

