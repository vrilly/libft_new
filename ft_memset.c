/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:39:54 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/07 16:17:18 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len)
	{
		*str = c;
		str++;
		len--;
	}
	return (b);
}
