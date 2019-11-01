/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strrchr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:29:50 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 16:10:06 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	cc;

	len = 0;
	cc = (char)c;
	while (s[len])
		len++;
	while (s[len] != c && len)
		len--;
	if (s[len] != c)
		return (NULL);
	return ((char*)s + len);
}
