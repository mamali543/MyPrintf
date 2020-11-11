/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:32:38 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:32:23 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_ret++;
}

size_t	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_putstr(const char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*p;
	unsigned char	*o;

	o = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (*o || *p)
	{
		if (*o != *p)
			return (*o - *p);
		else
		{
			o++;
			p++;
		}
	}
	return (0);
}
