/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   itoa.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 21:04:19 by tjans         #+#    #+#                 */
/*   Updated: 2019/10/31 19:25:56 by tjans         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_strrev(char *s)
{
	char	swp;
	char	*s1;

	s1 = s + ft_strlen(s) - 1;
	while (s1 > s)
	{
		swp = *s1;
		*s1 = *s;
		*s = swp;
		s1--;
		s++;
	}
}

static char	get_digit(int *n)
{
	int	digit_calc;

	digit_calc = *n % 10;
	if (digit_calc < 0)
		digit_calc *= -1;
	*n /= 10;
	return ((char)digit_calc + '0');
}

static void	set_zero(char *str, int *i)
{
	str[*i] = '0';
	(*i)++;
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		neg;

	s = malloc(sizeof(char) * 12);
	if (!s)
		return (NULL);
	i = 0;
	neg = (n < 0);
	if (n == 0)
		set_zero(s, &i);
	while (n / 10 || n % 10)
	{
		s[i] = get_digit(&n);
		i++;
	}
	if (neg)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	ft_strrev(s);
	return (s);
}
