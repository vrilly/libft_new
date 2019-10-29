/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strnstr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:40:14 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 13:25:28 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	haystack_pos;
	int	needle_pos;

	haystack_pos = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[haystack_pos] && haystack_pos < len)
	{
		needle_pos = 0;
		while (haystack[haystack_pos + needle_pos] == needle[needle_pos] &&
				haystack_pos + needle_pos < len)
		{
			needle_pos++;
			if (!needle[needle_pos])
				return ((char*)haystack + haystack_pos);
		}
		haystack_pos++;
	}
	return (NULL);
}
