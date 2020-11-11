/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 22:19:03 by mamali            #+#    #+#             */
/*   Updated: 2020/10/30 13:07:46 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	whitespace(char c)
{
	if (c == '\n' || c == '\v' || c == '\f' || c == '\t' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				negativity;
	unsigned long	result;

	result = 0;
	negativity = 1;
	i = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-')
		negativity = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (result > 2147483647 && negativity == 1)
		return (-1);
	if (result > 2147483648 && negativity == -1)
		return (0);
	return (result * negativity);
}

int			ft_len(long n)
{
	long		i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*itoa(int n)
{
	long	n1;
	long	n2;
	char	*str;

	n1 = n;
	n2 = ft_len(n);
	if (n1 < 0)
		n1 = -n1;
	if (!(str = malloc((n2 + 1) * sizeof(char))))
		return (NULL);
	str[n2] = '\0';
	if (n1 == 0)
		str[n2 - 1] = '0';
	while (n1 != 0)
	{
		str[n2 - 1] = ((n1 % 10) + 48);
		n1 = n1 / 10;
		n2--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char		*utoa(long long n)
{
	long long			n1;
	long long			n2;
	char				*str;

	n1 = n;
	n2 = ft_len(n);
	if (!(str = malloc(sizeof(char) * (n2 + 1))))
		return (NULL);
	str[n2] = '\0';
	if (n1 == 0)
		str[n2 - 1] = '0';
	while (n1 != 0)
	{
		str[--n2] = ((n1 % 10) + 48);
		n1 /= 10;
	}
	return (str);
}
