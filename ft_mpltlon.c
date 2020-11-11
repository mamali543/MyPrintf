/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mpltlon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:54:35 by mamali            #+#    #+#             */
/*   Updated: 2020/11/05 17:33:22 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ifmaw(void)
{
	if (g_nbrz == 0 && (int)g_inf.arg == 0)
	{
		if (g_inf.precr < 0)
		{
			ft_putchar('0');
			g_nbrs--;
		}
		while (g_nbrs-- != 0)
			ft_putchar(' ');
	}
	else
	{
		if (g_inf.cnvrg == 'u')
			g_str = utoa((unsigned int)g_inf.arg);
		else if (g_inf.cnvrg == 'x' || g_inf.cnvrg == 'X')
			g_str = hex((unsigned int)g_inf.arg);
		else
			g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
		while (g_smln-- > 0)
			ft_putchar(' ');
	}
}

void	ft_getronnawam(void)
{
	g_smln--;
	ifmaw();
}

void	ifnmaw(void)
{
	if (g_nbrz == 0 && (int)g_inf.arg == 0)
	{
		if (g_inf.precr < 0)
			g_nbrs--;
		while (g_nbrs-- != 0)
			ft_putchar(' ');
		if (g_inf.precr < 0)
			ft_putchar('0');
	}
	else
	{
		while (g_smln-- > 0)
			ft_putchar(' ');
		if (g_inf.cnvrg == 'u')
			g_str = utoa((unsigned int)g_inf.arg);
		else if (g_inf.cnvrg == 'x' || g_inf.cnvrg == 'X')
			g_str = hex((unsigned int)g_inf.arg);
		else
			g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	ft_getronnanm(void)
{
	g_smln--;
	ifnmaw();
}
