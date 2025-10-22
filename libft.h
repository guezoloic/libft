#ifndef LIBFT_A
#define LIBFT_A

#include <stddef.h>
#include <stdlib.h>

/*
	The ft_isalpha() function tests for
	any character for which isupper(3) or
	islower(3) is true.
 */
int	ft_isalpha(int c);
/*
	The ft_isdigit() function tests 
	for a decimal digit character.  
	Regardless of locale, this 
	includes the following characters 
	only: '0' '1' '2' '3' '4' '5' '6'
	'7' '8' '9'
 */
int	ft_isdigit(int c);

/*
	The ft_isalnum() function tests 
	for any character for which
	isalpha(3) or isdigit(3) is true.
 */
int ft_isalnum(int c);

/*  
	The ft_isascii() function tests 
	for an ASCII character, which is
	any character between 0 and octal
	0177 inclusive. 
 */
int	ft_isascii(int c);

/*
	The ft_isprint() function tests for 
	any printing character, including
	space (‘ ’).
*/
int	ft_isprint(int c);

/*
	The ft_strlen() function computes 
	the length of the string s.
*/
size_t	ft_strlen(const char *s);

/*
	The ft_memset() function writes len 
	bytes of value c (converted to an 
	unsigned char) to the string b.
*/
void	*ft_memset(void *b, int c, size_t len); 

/*
	The ft_bzero() function writes n zeroed 
	bytes to the string s.
*/
void	ft_bzero(void *s, size_t n);

/*
	The ft_memcpy() function copies n bytes 
	from memory area src to memory area dst.  
	If dst and src overlap, behavior is 
	undefined.  Applications in which dst and 
	src might overlap should use memmove(3) 
	instead.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
	The ft_memmove() function copies len 
	bytes from string src to string dst. 
	The two strings may overlap; the 
	copy is always done in a non-destructive 
	manner.
*/
void	*ft_memmove(void *dst, const void *src, size_t n);

/*
	ft_strlcpy() copies up to dstsize - 1 
	characters from the string src to 
	dst, NUL-terminating the result if
	dstsize is not 0.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// TODO
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
	The ft_toupper() function converts a 
	lower-case letter to the 
	corresponding upper-case letter.
*/
int	ft_toupper(int c);

/*
	The ft_tolower() function converts 
	an upper-case letter to the 
	corresponding lower-case letter.
*/
int	ft_tolower(int c);

/*
	The ft_strchr() function locates the 
	first occurrence of c (converted to 
	a char) in the string pointed to by s.
*/
char	*ft_strchr(const char *s, int c);

/*
	The ft_strrchr() function is identical 
	to strchr() except it locates the 
	last occurrence of c.
*/
char	*ft_strrchr(const char *s, int c);

// TODO
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/*
	he ft_memchr() function locates the 
	first occurrence of c (converted to 
	an unsigned char) in string s.
*/
void	*ft_memchr(const void *s, int c, size_t n);

// TODO
int	ft_memcmp(const void *s1, const void *s2, size_t n);

// TODO
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
	The ft_atoi() function converts the
	initial portion of the string pointed 
	to by str to int representation.
*/
int	ft_atoi(const char *str);

#endif
