/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:59:18 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/03 18:57:33 by tjans         ########   odam.nl         */
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
	size_t	new_len;
	char*	s2;

	new_len = 1;
	while (*s1 && ft_charinset(*s1, set))
		s1++;
	while (s1[new_len])
		new_len++;
	while (new_len && ft_charinset(s1[new_len - 1], set))
		new_len--;
	s2 = ft_substr(s1, 0, new_len);
	if (!s2)
		return (NULL);
	return (s2);
}
