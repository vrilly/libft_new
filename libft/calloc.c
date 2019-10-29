/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calloc.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:49:41 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 15:56:50 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			bytes;
	unsigned char	nbyte;

	bytes = count * size;
	ptr = malloc(bytes);
	nbyte = 0;
	if (!ptr)
		return (NULL);
	while (bytes)
	{
		bytes--;
		ptr[bytes] = nbyte;
	}
	return ((void*)ptr);
}
