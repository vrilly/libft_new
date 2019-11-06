/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstsize_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:09:15 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:11:10 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		cnt++;
	}
	return (cnt);
}
