0x07. C - Even more pointers, arrays and strings
Description
This repository contains C programming tasks focused on low-level memory manipulation, string operations, 2D arrays, and double pointers. All code is written to comply with the gnu89 standard and compiled using strict -Wall -Werror -Wextra -pedantic flags.
Requirements
 * OS: Ubuntu 20.04 LTS
 * Compiler: gcc (version 9.3.0 or higher)
 * Language Standard: C89 / gnu89
 * Coding Style: Betty style / GNU89 compliant
Header File
All function prototypes are declared in main.h:
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */

Tasks Summary
| File | Prototype | Description |
|---|---|---|
| 0-memset.c | char *_memset(char *s, char b, unsigned int n); | Fills the first n bytes of memory area s with constant byte b. |
| 1-memcpy.c | char *_memcpy(char *dest, char *src, unsigned int n); | Copies n bytes from memory area src to memory area dest. |
| 2-strchr.c | char *_strchr(char *s, char c); | Locates the first occurrence of character c in string s or returns NULL. |
| 3-strspn.c | unsigned int _strspn(char *s, char *accept); | Returns the length of the initial segment of s containing only bytes from accept. |
| 4-strpbrk.c | char *_strpbrk(char *s, char *accept); | Locates the first occurrence in s of any bytes in accept. |
| 5-strstr.c | char *_strstr(char *haystack, char *needle); | Locates the first occurrence of substring needle in string haystack. |
| 7-chessboard.c | void print_chessboard(char (*a)[8]); | Prints an 8x8 chessboard represented by a 2D char array. |
| 8-diagsums.c | void print_diagsums(int *a, int size); | Prints the sum of the main and anti-diagonals of a square matrix of integers. |
| 100-set_string.c | void set_string(char **s, char *to); | Sets the value of a pointer to a char using double pointer indirection. |
Compilation & Usage
Compile any task using gcc along with its test main.c file and _putchar.c (if required):
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-memset.c -o 0-memset
./0-memset

