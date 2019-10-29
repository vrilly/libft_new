/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:19:51 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 11:37:53 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	dst_size = 0;
	while (dst_size < dstsize - 1 && dst[dst_size])
		dst_size++;
	while (dst_size < dstsize - 1 && src[src_size])
	{
		dst[dst_size] = src[src_size];
		dst++;
		dstsize--;
		src_size++;
	}
	while (src[src_size])
		src_size++;
	dst[dst_size] = '\0';
	return (src_size + dst_size);
}
