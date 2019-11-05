/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:32:57 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 20:00:29 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;

	result = malloc(sizeof(char) * len + 1);
	if (!result || !s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
	{
		result[0] = '\0';
		return (result);
	}
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
