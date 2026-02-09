#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

//		Classification functions

/*
Check if argument is an alphabetic character. Returns zero if the character
tests false and non-zero if the character tests true.
*/
int		ft_isalpha(int c);
/*
Check if argument is a digit character. Returns zero if the character
tests false and non-zero if the character tests true.
*/
int		ft_isdigit(int c);
/*
Check if argument is an alphabetic or digit character. Returns zero if 
the character tests false and non-zero if the character tests true.
*/
int		ft_isalnum(int c);
/*
Check if argument is an ASCII character. Returns zero if the character 
tests false and non-zero if the character tests true.
*/
int		ft_isascii(int c);
/*
Check if argument is a printable character. Returns zero if the character 
tests false and non-zero if the character tests true.
*/
int		ft_isprint(int c);

//		Variable conversion and modification

/*
Return a string created from an int value literally transcribed to ASCII 
characters, negative int values are handled. Retunrs NULL if the memory 
allocation failed.
*/
char	*ft_itoa(int n);
/*
Return an int equivalent of an input string of characters by following set 
rules, negative int values are handled. Returns 0 if the input is not a 
valid string's number.
*/
int		ft_atoi(const char *nptr);
/*
Return the corresponding upper-casse of the argument if possible, 
otherwise, return the argument unchanged.
*/
int		ft_toupper(int c);
/*
Return the corresponding lower-casse of the input if possible, 
otherwise, return the argument unchanged.
*/
int		ft_tolower(int c);

//		String and memory iteration and comparison

/*
Return zero if two strings are identical, otherwise return 
the difference between the first two differing bytes.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
Locate and return a pointer to the first occurence of a character in a 
memory area, otherwise NULL.
*/
void	*ft_memchr(const void *s, int c, size_t n);
/*
Return the number of characters of a string.
*/
size_t	ft_strlen(const char *s);
/*
Return an integer greater than, equal to, or less than 0, according as 
the string s1 is greater than, equal to, or less than the string s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*
Return a pointer to the located character, or NULL if the character does 
not appear in the string.
*/
char	*ft_strchr(const char *s, int c);
/*
Return a pointer to the located character, or NULL if the character does 
not appear in the string.
*/
char	*ft_strrchr(const char *s, int c);
/*
Return a pointer to the first character of the first occurence of little 
in big. Return big if little is an empty string. Return NULL if little
occurs nowhere in big. 
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
/*
Apply a function f() to each characters of a string s.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//		String and memory copy and concatenation

/*
Write n zero bytes to the string s. If n is zero, does nothing.
*/
void	ft_bzero(void *s, size_t n);
/*
Write n bytes of argument c on the string s and return a pointer to it.
*/
void	*ft_memset(void *s, int c, size_t n);
/*
Copy n bytes from memory area s to memory area dest. If dest and src 
overlap, behavior is undefined. Return dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
Copy n bytes from string src to string dest. The two strings may 
overlap; the copy is always done in a non-destructive manner. Return dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*
Copy on a n maximum length from a source to a destination and returns the 
amount of concerned bytes. If the return value is >= size, the output string 
has been truncated. It is the caller's responsibility to handle this.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/*
Concatenate a source at the end of a destination, only covering an input 
maximum length, returns the amount of concerned bytes. If the return value is 
>= size, the output string has been truncated. It is the caller's responsibility 
to handle this.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

//		String and memory allocation, duplication and manipulation

/*
Allocate an input length of memory for any data type. The allocated memory 
is filled with bytes of value zero.
*/
void	*ft_calloc(size_t nmemb, size_t size);
/*
Allocate sufficient memory for a copy of the string s and do the copy.
*/
char	*ft_strdup(const char *s);
/*
Create a string of characters by duplicating an input string. This new 
string starts at index 'start' and has a maximum size of 'len'. Return the
new string or NULL if the memory allocation failed.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len);
/*
Allocate and returns a copy of s1, without the characters specified in set 
at the beginning and the end of s1. Return a trimmed copy of s1 or NULL 
if the memory allocation failed.
*/
char	*ft_strtrim(const char *s1, const char *set);
/*
Allocate and return an array of strings obtained by splitting s with the 
character c, used as delimiter. Return an array of strings resulting from 
the splitting of s or NULL if the memory allocation failed.
*/
char	**ft_split(const char *s, char c);
/*
Allocate and return a new string resulting from the concatenation of s1 
and s2. Return the new string or NULL if the memory allocation failed.
*/
char	*ft_strjoin(const char *s1, const char *s2);
/*
Create and return a string of characters from the result of an input function 
applied to every characters of a source string. Return NULL if the memory 
allocations failed.
*/
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

//		Content reading and printing in given file descriptor

/*
Write the character c on the file descriptor fd.
*/
void	ft_putchar_fd(char c, int fd);
/*
Write the string s on the file descriptor fd.
*/
void	ft_putstr_fd(char *s, int fd);
/*
Write the string s, followed by a newline, on the file descriptor fd.
*/
void	ft_putendl_fd(char *s, int fd);
/*
Write the int n on the file descriptor fd.
*/
void	ft_putnbr_fd(int n, int fd);

//		Chained list creation, manipulation and deletion

/*
Create and return the pointer of a new structure usable as a chained list 
element.
*/
t_list	*ft_lstnew(void *content);
/*
Count the number of elements in a pointed chained list, returning the result.
*/
int		ft_lstsize(t_list *lst);
/*
Find and return the pointer of the last element of a pointed chained list.
*/
t_list	*ft_lstlast(t_list *lst);
/*
Add a chained list element to the front of a pointed source list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/*
Add a chained list element to the back of a pointed source list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/*
Apply an input function on every content of a pointed chained list, no return 
value.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));
/*
Return a chained list created from the result of an input function applied to 
every content of a source list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/*
Delete a single pointed to structure's content using a function added as 
argument and free the node itself.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/*
Delete a chained list elements' content and free their allocated memory, no 
return value.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

#endif