/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:43:11 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/04 14:12:32 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;

	src_size = 0;
	if (!src)
		return (0);
	while (dstsize - 1 && src[src_size])
	{
		*dst = src[src_size];
		dstsize--;
		src_size++;
		dst++;
	}
	while (src[src_size])
		src_size++;
	*dst = '\0';
	return (src_size);
}
