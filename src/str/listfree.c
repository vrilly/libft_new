/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   listfree.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <tjans@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 17:02:41 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/25 17:08:29 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "str/list.h"

void	strlist_free(t_strlist **lst)
{
	t_strlist	*i;
	t_strlist	*prev;

	i = *lst;
	while (i)
	{
		prev = i;
		i = (*lst)->next;
		free(prev->str);
		free(prev);
	}
	*lst = NULL;
}
