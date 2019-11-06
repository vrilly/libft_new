/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bft_lstdelone_bonus.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 21:20:13 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/05 21:24:23 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst->content);
}
