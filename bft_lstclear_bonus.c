/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstclear_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:26:23 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:36:27 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*slst;
	t_list	*next;

	slst = *lst;
	while (slst->next)
	{
		next = slst->next;
		del(slst->content);
		free(slst->content);
		free(slst);
		slst = next;
	}
	del(slst->content);
	free(slst->content);
	free(slst);
	*lst = NULL;
}
