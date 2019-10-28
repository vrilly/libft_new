/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bzero.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:26:43 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/28 17:30:21 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	char	*cs;

	cs = (char*)s;
	while (n)
	{
		*cs = 0;
		n--;
		cs++;
	}
}
