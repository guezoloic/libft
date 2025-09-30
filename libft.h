#ifndef LIBFT_A
#define LIBFT_A

# include <stdlib.h>

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

#endif
