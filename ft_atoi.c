/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:15:01 by tjans         #+#    #+#                 */
/*   Updated: 2019/11/03 22:14:46 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	check_long(long result, char d, int negative)
{
	int	digit;

	digit = d - '0';
	if (!negative)
		return (result > 922337203685477580 && d > 7);
	else
		return (result > 922337203685477580 && d > 8);
}

int			ft_atoi(const char *str)
{
	long	result;
	int		negative;

	result = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\n' || *str == '\v' || *str == '\f') && *str)
		str++;
	negative = (*str == '-');
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		if (check_long(result, *str, negative))
			return ((negative) ? 0 : -1);
		result *= 10;
		result += (int)*str - '0';
		str++;
	}
	if (negative)
		return (result * -1);
	return (result);
}
