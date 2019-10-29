/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strchar.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:39:02 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 11:49:13 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s && *s != c)
		s++;
	if (*s != c)
		return (NULL);
	return (s);
}
