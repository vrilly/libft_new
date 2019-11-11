/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstadd_back_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:16:31 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/11 15:26:25 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (!alst || !new)
		return ;
	lst = *alst;
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}
