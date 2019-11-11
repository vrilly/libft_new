/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstiter_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/11 15:27:31 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/11 15:46:04 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
