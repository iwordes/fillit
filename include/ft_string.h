/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:38:51 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 16:47:18 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>
# include "ft_macros.h"
# include "ft_number.h"

char	*ft_strcat(char *string, const char *suffix);
char	*ft_strchr(const char *string, int character);
int		ft_strcmp(const char *string1, const char *string2);
char	*ft_strcpy(char *destination, const char *source);
char	*ft_strdup(const char *string);
size_t	ft_strlcat(char *string, const char *suffix, size_t size);
size_t	ft_strlen(const char *string);
char	*ft_strncat(char *string, const char *suffix, size_t n);
int		ft_strncmp(const char *string1, const char *string2, size_t bytecount);
char	*ft_strncpy(char *destination, const char *source, size_t bytecount);
char	*ft_strnstr(const char *haystack, const char *needle, size_t bytecount);
char	*ft_strrchr(const char *string, char find);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(const char *string, unsigned int start, size_t length);

void	ft_strclr(char *string);
void	ft_strdel(char **string);
int		ft_strequ(const char *string1, const char *string2);
void	ft_striter(char *string, void (*func)(char*));
void	ft_striteri(char *string, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *prefix, const char *suffix);
char	*ft_strmap(const char *string, char (*func)(char));
char	*ft_strmapi(const char *string, char (*func)(unsigned int, char));
int		ft_strnequ(const char *string1, const char *string2, size_t n);
char	*ft_strnew(size_t length);
char	**ft_strsplit(const char *string, char delimiter);

char	*ft_strctrim(const char *string, char trim);
char	*ft_strtrim(const char *string);

/*
** Custom
*/
size_t	ft_charcnt(const char *string, char to_count);
size_t	ft_charrcnt(const char *string, char to_count_runs);
size_t	ft_wordcnt(const char *string);

size_t	ft_struntil(const char *string, char c);
size_t	ft_struntils(const char *string, const char *substring);
size_t	ft_strluntil(const char *string, char c, size_t limit);
/*
** size_t	ft_strluntils
*/

char	*ft_strrep(const char *string, const char *find, const char *replace);
void	ft_strrev(char *string);
char	*ft_strrevdup(const char *string);

char	*ft_leftpad(const char *string, char pad, size_t size);
char	*ft_rightpad(const char *string, char pad, size_t size);

/*
** Conversion
*/
int		ft_atoi(const char *string);
char	*ft_itoa(int integer);
char	*ft_itoa_base(int integer, int base);

/*
** Character Checks
*/
int		ft_isupper(int character);
int		ft_islower(int character);
int		ft_isalpha(int character);
int		ft_isdigit(int character);
int		ft_isalnum(int character);
int		ft_ispunct(int character);
int		ft_isspace(int character);
int		ft_isprint(int character);
int		ft_isascii(int character);

int		ft_isstdspace(int character);

/*
** Character Manipulation
*/
int		ft_tolower(int character);
int		ft_toupper(int character);

#endif
