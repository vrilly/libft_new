/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:15:01 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/29 18:04:35 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	negative;

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
		result *= 10;
		result += (int)*str - '0';
		str++;
	}
	if (negative)
		return (result * -1);
	return (result);
}
