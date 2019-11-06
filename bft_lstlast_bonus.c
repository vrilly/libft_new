/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstlast_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:12:41 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:16:52 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
