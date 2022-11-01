#ifndef MAIN_H
#define MAIN_H


/**
 * File: main.h
 * Auth:Fas
 * description: Header file containig prototypes for all functions
 * 	used in the 0x06. c - more pointers, arrays and strings directory.
 */

void *_memset(void *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned it n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
int _putchar(char c);
#endif
