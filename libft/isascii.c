/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isascii.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:40:12 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 15:42:06 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
