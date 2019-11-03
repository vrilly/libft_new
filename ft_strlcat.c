/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:19:51 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/03 17:31:07 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	dst_newsize;

	dst_newsize = dstsize;
	if (!dst_newsize)
		return (0);
	dstlen = ft_strlen(dst);
	dst += dstlen;
	if (dstsize < dstlen)
		return (dstlen + ft_strlen(src));
	dst_newsize -= dstlen;
	while (*src && dst_newsize - 1)
	{
		*dst = *src;
		dst_newsize--;
		dstlen++;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dstlen);
}
