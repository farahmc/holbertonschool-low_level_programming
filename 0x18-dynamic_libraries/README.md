# C - Dynamic Libraries

## Tasks

### 0. A library is not a luxury but one of the necessities of life
- Create the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### 1. Without libraries what have we? We have no past and no future
- Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

### 2. Either write something worth reading or do something worth writing
- Write a blog post describing the differences between static and dynamic libraries. It should cover:
  - Why using libraries in general
  - How do they work
  - How to create them (Linux only)
  - How to use them (Linux only)
  - What are the differences between static and dynamic libraries
  - What are the advantages and drawbacks of each of them

### 3. Let's call C functions from Python
- Create a dynamic library that contains C functions that can be called from Python.
