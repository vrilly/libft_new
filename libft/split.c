/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 20:25:40 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 21:11:02 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_char(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s == c)
			cnt++;
		s++;
	}
	return (cnt);
}

static char		*newstr(char *s, char c)
{
	size_t	str_size;
	char	*str;

	str_size = 0;
	while (*s && *s != c)
	{
		str_size++;
		s++;
	}
	str = malloc(sizeof(char) * (str_size + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, str_size);
	str[str_size] = '\0';
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	arr_size;
	size_t	i;

	arr_size = count_char(s, c) + 1;
	arr = ft_calloc(arr_size + 1, sizeof(char*));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < arr_size - 1)
	{
		arr[i] = newstr((char*) s, c);
		if (!arr[i])
			return (NULL);
		s = ft_strchr(s, c);
		i++;
		if (!s)
			break ;
	}
	arr[i] = NULL;
	return (arr);
}
