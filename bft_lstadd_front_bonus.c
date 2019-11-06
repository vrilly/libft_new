/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstadd_front_bonus.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:04:07 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:11:43 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*next_elem;

	if (!new || !alst)
		return ;
	next_elem = *alst;
	new->next = next_elem;
	*alst = new;
}
