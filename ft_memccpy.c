/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memccpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:02:51 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/28 17:18:29 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*csrc;
	char			*cdst;
	unsigned char	cc;

	cc = (unsigned char)c;
	csrc = (char*)src;
	cdst = (char*)dst;
	while (n)
	{
		*cdst = *csrc;
		if (*cdst == cc)
			return (cdst + 1);
		csrc++;
		cdst++;
		n--;
	}
	return (NULL);
}
