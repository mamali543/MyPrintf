/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:21:29 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:25:11 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		lenh(unsigned long long n)
{
	unsigned long long	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

char	*hex(unsigned int n)
{
	char				*str;
	int					len;
	int					tmp;
	unsigned long long	n1;

	n1 = n;
	len = lenh(n1);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	while (n1 != 0)
	{
		tmp = n1 % 16;
		if (tmp < 10)
			str[len--] = tmp + 48;
		else
		{
			if (g_inf.cnvrg == 'x')
				str[len--] = tmp + 87;
			else
				str[len--] = tmp + 55;
		}
		n1 /= 16;
	}
	return (str);
}

char	*hex_16(unsigned long long n)
{
	char				*str;
	int					len;
	int					tmp;
	unsigned long long	n1;

	n1 = n;
	len = lenh(n1) + 2;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len--] = '\0';
	while (n1 != 0)
	{
		tmp = n1 % 16;
		if (tmp < 10)
			str[len] = tmp + 48;
		else
			str[len] = tmp + 87;
		n1 /= 16;
		len--;
	}
	str[1] = 'x';
	str[0] = '0';
	return (str);
}

int		ft_nlen(int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
