/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memcmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 22:33:00 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 14:00:19 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n)
	{
		if ((unsigned char*)s1 != (unsigned char*)s2)
		{
			c1 = *(unsigned char*)s1;
			c2 = *(unsigned char*)s2;
			return (c1 - c2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
