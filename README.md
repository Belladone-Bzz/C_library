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

To use the libft.a library, clone the directory with the command `git clone https://github.com/Belladone-Bzz/C_library.git` in the terminal then go in the directory with the command `cd C_library`.

The library is accompanied by a header file called libft.h, which contains prototypes for all the functions in the library. Every file is situated in the project's root, meaning no directory or hierarchy needs to be handled other than keeping the library together. A Makefile is included along a header file making compilation as simple as `make` or `make all`.

Other necessary make rules namely `clean` `fclean` and `re` are included. To clean the object files and library, run `make clean` and `make fclean`, respectively. 

## :page_facing_up: Functions description

|NAME|PROTOTYPE|DECRIPTION|RETURN VALUES|
|---|---|---|---|
|ft_isalpha|int ft_isalpha(int c)|The ft_isalpha() function tests for a letter character.|The ft_isalpha return zero if the character tests false and non-zero if the character tests true.|
|ft_is_digit|int ft_isdigit(int c)|The ft_isdigit() function tests for a decimal digit character.|The ft_isdigit() function return zero if the character tests false and return non-zero if the character tests true.|
|ft_isalnum|int ft_isalnum(int c)|The ft_isalnum() function tests for any character for which isalpha() or isdigit() is true.|The ft_isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isascii|int ft_isascii(int c)|The ft_isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.|The ft_isascii() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isprint|int ft_isprint(int c)|The ft_isprint() function tests for any printing character, including space.|The ft_isprint() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_strlen|size_t	ft_strlen(const char *s)|The ft_strlen() function computes the length of the string s.|The ft_strlen() function returns the number of characters that precede the terminating NULL character.|
|ft_memset|void *ft_memset(void *s, int c, size_t len)|The ft_memset() function writes len bytes of value c to the string s.|The ft_memset() function returns its first argument.|
|ft_bzero|void ft_bzero(void *s, size_t n)|The bzero() function writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.|Nothing|
|ft_memcpy|void *ft_memcpy(void *dest, const void *src, size_t n)|The ft_memcpy() function copies n bytes from memory area s to memory area dest. If dest and src overlap, behavior is undefined. Applications in which dest and s might overlap should use ft_memove instead|The ft_memcpy() function returns dest.|
|ft_memmove|void *ft_memmove(void *dest, const void *src, size_t len)|The ft_memmove() function copies len bytes from string src to string dest. The two strings may overlap; the copy is always done in a non-destructive manner.|The ft_memmove() function returns dest.|
|ft_strlcpy|size_t ft_strlcpy(char *dst, const char *src, size_t size)|The ft_strlcpy() function copy size bytes from string src to string dst. It is designed to be safer, more consistent, and less error prone replacement for the easily misused function strncpy. Note that src must be NULL-terminated and that room for the NULL should be included in size. If the src and dst strings overlap, the behavior is undefined.|The ft_strlcpy() function return the total length of the strings it tried to create. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
|ft_strlcat|size_t ft_strlcat(char *dst, const char *src, size_t size)|The ft_strlcat() function concatenate size bytes from string src with string dst. It is designed to be safer, more consistent, and less error prone replacements for the easily misused function strncat. Note that src and dst must be NULL-terminated and that room for the NULL should be included in size. If the src and dst strings overlap, the behavior is undefinded.|ft_strlcat() function return the total length of the string it tried to create. That means the initial length of dst plus the length of src. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
|ft_toupper|int ft_toupper(int c)|The ft_toupper() function converts a lower-case letter to the corresponding upper-case letter.|If the argument is a lower-case letter, the ft_toupper() function returns the corresponding upper-casse letter, otherwise, the argument is returned unchanged.|
|ft_tolower|int ft_tolower(int c)|The ft_tolower() function converts an upper-case letter to the corresponding lower-case letter.|If the argument is an upper-case letter, the ft_tolower() function returns the corresponding lower-case letter, otherwise, the argument is returned unchanged.|
|ft_strchr|char *ft_strchr(const char *s, int c)|The ft_strchr() function locates the first occurence of c in the string pointed to by s. If c is '\0', the function locate the terminating '\0'.|The function ft_strchr() return a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strrchr|char *ft_strrchr(const char *s, int c)|The ft_strrchr() function is identical to ft_strchr(), except it locates the last occurence of c.|The function ft_strrchr() returns a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strncmp|int ft_strncmp(const char *s1, const char *s2, size_t n)|The ft_strncmp() function lexicographically compare the null-terminated strings s1 and s2. The ft_strncmp() function compares not more than n characters. Characters that appear after a '\0' character are not compared.|The ft_strncmp() function returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.|
|ft_memchr| void *ft_memchr(const void *s, int c, size_t n)|The ft_memchr() function locates the first occurence of c in string s.|The ftmemchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.|
|ft_memcmp|int	ft_memcmp(const void *s1, const void *s2, size_t n)|The ft_memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long.|The ft_memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes|
|ft_strnstr|char *ft_strnstr(const char *big, const char *little, size_t len)|The ft_strnstr() function locates the first occurence of the NULL-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched.|If little is an empty string, big is returned; if little occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurence of little in big is returned.|
|ft_atoi|int	ft_atoi(const char *nptr)|The ft_atoi() function converts the initial portion of the string pointed to by nptr to int representation.|The ft_atoi function returns an integral number, represents int value. If the input string nptr is not a valid string's number, it returns 0.|
|ft_calloc|void	*ft_calloc(size_t nmemb, size_t size)|The ft_calloc() function allocates memory for any data type. The allocated memory is filled with bytes of value zero.|If successful, ft_calloc() returns a pointer to allocated memory. If there is an error, it return a NULL pointer.|
|ft_strdup|char	*ft_strdup(const char *s)|The ft-strdup() function allocates sufficient memory for a copy of the string s and does the copy.|ft_strdup() returns a pointer to the copy. If insufficient memory is available, NULL is returned.|
|ft_substr|char	*ft_substr(const char *s, unsigned int start, size_t len)|Allocate (with malloc) and return a new string from the string s. This new string starts at index 'start' and has a maximum size of 'len'.|ft_substr() returns the new string and NULL if the memory allocation failed.|
|ft_strjoin|char *ft_strjoin(const char *s1, const char *s2)|Allocate (with malloc) and returns a new string resulting from the concatenation of s1 and s2.|ft_strjoin() returns the new string and NULL if the memory allocation failed.|
|ft_strtrim|char *ft_strtrim(const char *s1, const char *set)|Allocate (with malloc) and returns a copy of s1, without the characters specified in set at the beginning and the end of s1.|ft_strtrim() returns a trimmed copy of s1 and NULL if the memory allocation failed.|
|ft_split|char **ft_split(const char *s, char c)|Allocate (with malloc) and returns an array of strings obtained by splitting s with the character c, used as delimiter.|ft_split() returns an array of strings resulting from the splitting of s and NULL if the memory allocation failed.|
|ft_itoa|char *ft_itoa(int n)|Allocate (with malloc) and returns a string representing n. Negative numbers are handled.|ft_itoa() returns the string representing n and NULL if the memory allocation failed.|
|ft_strmapi|char *ft_strmapi(const char *s, char (*f)(unsigned int, char))| Apply the function f() to each characters in the string s to create a new string (with malloc) resulting of the successive applications of f().|ft_strmapi() returns a new string resulting of the successive applications of f() and NULL if the memory allocations failed.|
|ft_striteri|void	ft_striteri(char *s, void (*f)(unsigned int, char*))|Apply the function f() to each characters of the string s, passing its index as a first parameter. Each character is transmitted by address to 'f' so it can be modified if necessary.|Nothing|
|ft_putchar_fd|void	ft_putchar_fd(char c, int fd)|The ft_putchar_fd() function writes the character c on the file descriptor fd.|Nothing|
|ft_putstr_fd|void	ft_putstr_fd(char *s, int fd)|The ft_putstr_fd() function writes the string s on the file descriptor fd.|Nothing|
|ft_putendl_fd|void	ft_putendl_fd(char *s, int fd)|ft_putendl_fd() writes the string s, followed by a newline, on the file descriptor fd|Nothing|
|ft_putnbr_fd|void	ft_putnbr_fd(int n, int fd)|ft_putnbr_fd() writes the int n on the file descriptor fd|Nothing|
|ft_lstnew|t_list	*ft_lstnew(void *content)|Allocate (with malloc) and return the new element. The member variable 'content' is initialized with the value of the 'content' parameter. The 'next' variable is initialized to NULL.|ft_lstnew() returns the new element.|
|ft_lstadd_front|void	ft_lstadd_front(t_list **lst, t_list *new)|Add the 'new' element at the front of the list|Nothing|
|ft_lstsize|int	ft_lstsize(t_list *lst)|Count the number of elements of the list|ft_lstsize() returns the size of the list|
|ft_lstlast|t_list	*ft_lstlast(t_list *lst)|Returns the last element of the list|ft_lstlast() returns the last element of the list|
|ft_lstadd_back|void	ft_lstadd_back(t_list **lst, t_list *new)|Add the 'new' element at the end of the list|Nothing|
|ft_lstdelone|void	ft_lstdelone(t_list *lst, void (*del)(void *))|Free the memory of the element passed as parameter using the 'del' function then free(). The memory of 'next' must not be freed.|Nothing|
|ft_lstclear|void	ft_lstclear(t_list **lst, void (*del)(void *))| Deletes and free the memory of the element passed as parameter and all the following elements using 'del' and free(). Finally, the initial pointer must be set to NULL.|Nothing|
|ft_lstiter|void	ft_lstiter(t_list *lst, void (*f)(void *))|Iterate over the list 'lst' and apply the function 'f' to the content of all elements.|Nothing|
|ft_lstmap|t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))| Iterate over the list 'lst' and apply the function 'f' to the content of each elements. Create a new list resulting of the successive applications of f(). The function 'del' is used to destroy the content of an element if necessary.|ft_lstmap() returns the new list|
---


