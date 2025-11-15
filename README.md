# My C_library
## :open_book: Project background

> [!NOTE]
**No artificial intelligence was used in the creation of this project.**

The aim of this project was to help me understand how the libc library functions work, how to recreate them myself, and how to use them correctly. I did not recode certain functions considered obsolete, while functions deemed useful but only available in C++ were recoded in C and added to the library. This project allowed me to greatly improve the following skills:
- string manipulation
- dynamic allocation
- linked lists
- automated compilation
- library linking
- library creation
- memory management & pointers

## :key: Instructions

To clone the directory, run `git clone https://github.com/Belladone-Bzz/C_library.git` then `cd C_library`in the terminal.

To compile the code, run `make`. This will create a library called libft.a.

To clean the object files and library, run `make clean` and `make fclean`, respectively.

The library is accompanied by a header file called libft.h, which contains prototypes for all the functions in the library. To use the library in your project, include the header file and link to the library.


## :page_facing_up: Functions description

|NAME|PROTOTYPE|DECRIPTION|RETURN VALUES|
|---|---|---|---|
|ft_isalpha|int ft_isalpha(int c)|The ft_isalpha() function tests for any character for which isupper(3) or islower(3) is true.|The ft_isalpha return zero if the character tests false and non-zero if the character tests true.|
|ft_is_digit|int ft_isdigit(int c)|The ft_isdigit() function tests for a decimal digit character.|The ft_isdigit() function return zero if the character tests false and return non-zero if the character tests true.|
|ft_isalnum|int ft_isalnum(int c)|The ft_isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.|The ft_isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isascii|int ft_isascii(int c)|The ft_isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.|The ft_isascii() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isprint|int ft_isprint(int c)|The ft_isprint() function tests for any printing character, including space.|The ft_isprint() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_strlen|size_t ft_strlen(const char *str)|The ft_strlen() function computes the length of the string str.|The ft_strlen() function returns the number of characters that precede the terminating NULL character.|
|ft_memset|void *ft_memset(void *src, int c, size_t len)|The ft_memset() function writes len bytes of value c (converted to an unsigned char) to the string src.|The ft_memset() function returns its first argument.|
|ft_bzero|void ft_bzero(void *src, size_t n|The bzero() function writes n zeroed bytes to the string src. If n is zero, bzero() does nothing.|The ft_bzero() function returns its first argument.|
|ft_memcpy|void *ft_memcpy(void *dest, const void *src, size_t n)|The ft_memcpy() function copies n bytes from memory area src to memory area dest. If dest and src overlap, behavior is undefined. Applications in which dest and src might overlap should use ft_memove instead|The ft_memcpy() function returns dest.|
|ft_memmove|void *ft_memmove(void *dest, const void *src, size_t len)|The ft_memmove() function copies len bytes from string src to string dest. The two strings may overlap; the copy is always done in a non-destructive manner.|The ft_memmove() function returns dest.|
|ft_strlcpy|size_t ft_strlcpy(char *dst, const char *src, size_t size)|The ft_strlcpy() function copy string size bytes from string src to string dst. It is designed to be safer, more consistent, and less error prone replacement for the easily misused function strncpy. ft_strlcpy() take the full size of the destination buffer and guarantee NULL-termination if there is room. Note that src must be NULL-terminated and that room for the NULL should be included in size. ft_strlcpy() copies up to size - 1 characters from the string src to dst, NULL-terminating the result if size is not 0. If the src and dst strings overlap, the behavior is undefined.|The ft_strlcpy() function return the total length of the strings it tried to create. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
|ft_strlcat|size_t ft_strlcat(char *dst, const char *src, size_t size)|The ft_strlcat() function concatenate size bytes from string src with string dst. It is designed to be safer, more consistent, and less error prone replacements for the easily misused function strncat. ft_strlcat() take the full size of the destination buffer and guarantee NULL-termination if there is room. Note that src and dst must be NUL-terminated and that room for the NULL should be included in size. ft_strlcat() appends string src to the end of dst. It will append at most size - strlen(dst) - 1 characters. It will then NULL-terminate, unless size is 0 or the original dst string was longer than size (in practice this should not happen as it means that either size is incorrect or that dst is not a proper string). If the src and dst strings overlap, the behavior is undefinded.|ft_strlcat() function return the total length of the string it tried to create. That means the initial length of dst plus the length of src. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
|ft_toupper|int ft_toupper(int c)|The ft_toupper() function converts a lower-case letter to the corresponding upper-case letter.|If the argument is a lower-case letter, the ft_toupper() function returns the corresponding upper-casse letter, otherwise, the argument is returned unchanged.|
|ft_tolower|int ft_tolower(int c)|The ft_tolower() function converts an upper-case letter to the corresponding lower-case letter.|If the argument is an upper-case letter, the ft_tolower() function returns the corresponding lower-case letter, otherwise, the argument is returned unchanged.|
|ft_strchr|char *ft_strchr(const char *str, int c)|The ft_strchr() function locates the first occurence of c (converted to a char) in the string pointed to by src. The terminating null character is considered to be part of the string; therefor if c is '\0', the function locate the terminating '\0'.|The function ft_strchr() return a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strrchr|char *ft_strrchr(const char *str, int c)|The ft_strrchr() function is identical to ft_strchr(), except it locates the last occurence of c.|The function ft_strrchr() returns a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strncmp|int ft_strncmp(const char *str1, const char *str2, size_t n)|The ft_strncmp() function lexicographically compare the null-terminated strings str1 and str2. The ft_strncmp() function compares not more than n characters. Because ft_strncmp() is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.|The ft_strncmp() function returns an integer greater than, equal to, or less than 0, according as the string str1 is greater than, equal to, or less than the string str2.|
|ft_memchr| void *ft_memchr(const void *str, int c, size_t n)|The ft_memchr() function locates the first occurence of c (convered to an unsigned char) in string str.|The ftmemchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.|
|ft_memcmp|int	ft_memcmp(const void *str1, const void *str2, size_t n)|The ft_memcmp() function compares byte string str1 against byte string str2. Both strings are assumed to be n bytes long.|The ft_memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes|
|ft_strnstr|char	*ft_strnstr(const char *big, const char *little, size_t len)|The ft_strnstr() function locates the first occurence of the NULL-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched.|If little is an empty string, big is returned; if little occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurence of little in big is returned.|
|ft_atoi|int	ft_atoi(const char *str)|The ft_atoi() function converts the initial portion of the string pointed to by str to int representation.|The ft_atoi function returns an integral number, represents int value. If the input string str is not a valid string's number, it returns 0.|
|ft_calloc|void	*ft_calloc(size_t nmemb, size_t size)|The ft_calloc() function allocates memory. The allocated memory is aligned such that it can be used for any data type. The ft_calloc() function contigously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.|If successful, ft_calloc() returns a pointer to allocated memory. If there is an error, it return a NULL pointer.|
|ft_strdup|char	*ft_strdup(const char *s)|The ft-strdup() function allocates sufficient memory for a copy of the string s and does the copy.|ft_strdup() returns a pointer to the copy. If insufficient memory is available, NULL is returned.|
|||||
---


