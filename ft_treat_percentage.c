/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:24:20 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:39:16 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	treat_percentagewz(void)
{
	int	i;

	i = g_inf.width;
	if (g_inf.width && g_inf.moins)
	{
		ft_putchar('%');
		while (--i)
			ft_putchar(' ');
	}
	else if (g_inf.width)
	{
		while (--i)
			ft_putchar('0');
		ft_putchar('%');
	}
}

void	ft_treat_percentage(void)
{
	int	i;

	i = g_inf.width;
	if (g_inf.zero)
		treat_percentagewz();
	else if (g_inf.width && !g_inf.zero)
	{
		if (g_inf.moins)
		{
			ft_putchar('%');
			while (--i)
				ft_putchar(' ');
		}
		else
		{
			while (--i)
				ft_putchar(' ');
			ft_putchar('%');
		}
	}
}
