/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   listlen.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <tjans@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 16:47:26 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/25 17:10:53 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "str/list.h"

size_t	strlist_len(t_strlist *lst)
{
	size_t	len;

	if (!lst)
		return (0);
	len = ft_strlen(lst->str);
	while (lst->next)
	{
		lst = lst->next;
		len += ft_strlen(lst->str);
	}
	return (len);
}
