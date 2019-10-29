/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncmp.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:27:36 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 14:11:47 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n)
	{
		if (*s1 != *s2)
		{
			c1 = *s1 + 127;
			c2 = *s2 + 127;
			return (c1 - c2);
		}
		if (!*s1 && *s1 == *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
