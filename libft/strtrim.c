/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:59:18 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 19:25:08 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	ft_charinset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	str_len;
	size_t	str_pos;

	str_len = ft_strlen(s1);
	newstring = malloc(sizeof(char) * str_len + 1);
	str_pos = 0;
	if (!newstring)
		return (NULL);
	while (*s1)
	{
		if (!ft_charinset(*s1, set))
		{
			newstring[str_pos] = *s1;
			str_pos++;
		}
		s1++;
	}
	newstring[str_pos] = '\0';
	return (newstring);
}
