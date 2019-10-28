/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memcpy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:58:52 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/28 16:58:59 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*csrc;
	char	*cdst;

	csrc = (char*)src;
	cdst = (char*)dst;
	while (n)
	{
		*cdst = *csrc;
		csrc++;
		cdst++;
		n--;
	}
	return (dst);
}
