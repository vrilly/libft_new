/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstnew_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:00:49 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:02:56 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list));
	new_lst->content = content;
	return (new_lst);
}
