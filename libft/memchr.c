/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memchr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 22:17:16 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/28 22:25:13 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned char	cc;

	str = s;
	cc = (unsigned char)c;
	while (n)
	{
		if (*str == cc)
			return ((void*)str);
		str++;
		n--;
	}
	return (NULL);
}
