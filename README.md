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

The library is accompanied by a header file called libft.h, which contains prototypes for all the functions in the library. Every file is situated in the project's root, meaning no directory or hierarchy needs to be handled other than keeping the library together.

The project includes a Makefile with the following rules:

```
make        # Compiles the library and creates libft.a
make all    # Same as above
make clean  # Removes object files
make fclean # Removes all generated files including libft.a
make re     # Recompiles the entire project from scratch
```
All source files are compiled with `-Wall -Wextra -Werror` flags for strict error checking. To compile, use the command `make` to create the `libft.a` library at the root

#### Using the Library

To use libft in other projects:

1. If you're working in a github repository, you can clone the library with the following command to add it as a submodule :
```bash
git submodule add https://github.com/Belladone-Bzz/C_library.git
```
2. Include the header file in your project:
 ```c
 #include "libft.h"
 ```
3. Execute the provided Makefile to create the libft.a file and include it in your project compilation

## :page_facing_up: Functions description

**Classification functions**

|NAME|DECRIPTION|
|---|---|
|ft_isalpha|Check if argument is an alphabetic character. Returns zero if the character tests false and non-zero if the character tests true.|
|ft_is_digit|Check if argument is a digit character. Returns zero if the character tests false and non-zero if the character tests true.|
|ft_isalnum|Check if argument is an alphabetic or digit character. Returns zero if the character tests false and non-zero if the character tests true.|
|ft_isascii|Check if argument is an ASCII character. Returns zero if the character tests false and non-zero if the character tests true.|
|ft_isprint|Check if argument is a printable character. Returns zero if the character  tests false and non-zero if the character tests true.|
---

**Variable conversion and modification functions**

|NAME|DECRIPTION|
|---|---|
|ft_itoa|Return a string created from an int value literally transcribed to ASCII characters, negative int values are handled. Return NULL if the memory allocation failed.|
|ft_atoi|Return an int equivalent of an input string of characters by following set rules, negative int values are handled. Return 0 if the input is not a valid string's number.|
|ft_toupper|Return the corresponding upper-casse of the argument if possible, otherwise, return the argument unchanged.|
|ft_tolower|Return the corresponding lower-casse of the input if possible, otherwise, return the argument unchanged.|
---

**String and memory iteration and comparison functions**

|NAME|DECRIPTION|
|---|---|
|ft_memcmp|Return zero if two strings are identical, otherwise return the difference between the first two differing bytes.|
|ft_memchr|Locate and return a pointer to the first occurence of a character in a memory area, otherwise NULL.|
|ft_strlen|Return the number of characters of a string.|
|ft_strncmp|Return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.|
|ft_strchr|Return a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strrchr|Return a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strnstr|Return a pointer to the first character of the first occurence of little in big. Return big if little is an empty string. Return NULL if little occurs nowhere in big.|
|ft_striteri|Apply a function f() to each characters of a string s.|
---

**String and memory copy and concatenation functions**

|NAME|DECRIPTION|
|---|---|
|ft_bzero|Write n zero bytes to the string s. If n is zero, does nothing.|
|ft_memset|Write n bytes of argument c on the string s and return a pointer to it.|
|ft_memcpy|Copy n bytes from memory area s to memory area dest. If dest and src overlap, behavior is undefined. Return dest.|
|ft_memmove|Copy n bytes from string src to string dest. The two strings may overlap; the copy is always done in a non-destructive manner. Return dest.|
|ft_strlcpy|Copy on a n maximum length from a source to a destination and returns the amount of concerned bytes. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
|ft_strlcat|Concatenate a source at the end of a destination, only covering an input maximum length, returns the amount of concerned bytes. If the return value is >= size, the output string has been truncated. It is the caller's responsibility to handle this.|
---

**String and memory allocation, duplication and manipulation functions**

|NAME|DECRIPTION|
|---|---|
|ft_calloc|Allocate an input length of memory for any data type. The allocated memory is filled with bytes of value zero.|
|ft_strdup|Allocate sufficient memory for a copy of the string s and do the copy.|
|ft_substr|Create a string of characters by duplicating an input string. This new string starts at index 'start' and has a maximum size of 'len'. Return the new string or NULL if the memory allocation failed.|
|ft_strtrim|Allocate and returns a copy of s1, without the characters specified in set at the beginning and the end of s1. Return a trimmed copy of s1 or NULL if the memory allocation failed.|
|ft_split|Allocate and return an array of strings obtained by splitting s with the character c, used as delimiter. Return an array of strings resulting from the splitting of s or NULL if the memory allocation failed.|
|ft_strjoin|Allocate and return a new string resulting from the concatenation of s1 and s2. Return the new string or NULL if the memory allocation failed.|
|ft_strmapi|Create and return a string of characters from the result of an input function applied to every characters of a source string. Return NULL if the memory allocations failed.|
---

**Content reading and printing in given file descriptor**

|NAME|DECRIPTION|
|---|---|
|ft_putchar_fd|Write the character c on the file descriptor fd.|
|ft_putstr_fd|Write the string s on the file descriptor fd.|
|ft_putendl_fd|Write the string s, followed by a newline, on the file descriptor fd.|
|ft_putnbr_fd|Write the int n on the file descriptor fd.|
---

**Chained list creation, manipulation and deletion**

|NAME|DECRIPTION|
|---|---|
|ft_lstnew|Create and return the pointer of a new structure usable as a chained list element.|
|ft_lstsize|Count the number of elements in a pointed chained list, returning the result.|
|ft_lstlast|Find and return the pointer of the last element of a pointed chained list.|
|ft_lstadd_front|Add a chained list element to the front of a pointed source list.|
|ft_lstadd_back|Add a chained list element to the back of a pointed source list.|
|ft_lstiter|Apply an input function on every content of a pointed chained list, no return value.|
|ft_lstmap|Return a chained list created from the result of an input function applied to every content of a source list.|
|ft_lstdelone|Delete a single pointed to structure's content using a function added as argument and free the node itself.|
|ft_lstclear|Delete a chained list elements' content and free their allocated memory, no return value.|
---
