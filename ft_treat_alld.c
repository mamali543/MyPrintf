/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_alld.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:54:19 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:33:46 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	wltp(void)
{
	while (g_zmln-- > 0)
		ft_putchar('0');
	if (g_inf.cnvrg == 'u')
		g_str = utoa((unsigned int)g_inf.arg);
	else if (g_inf.cnvrg == 'x' || g_inf.cnvrg == 'X')
		g_str = hex((unsigned int)g_inf.arg);
	else
		g_str = itoa((int)g_inf.arg);
	ft_putstr(g_str);
	free(g_str);
}

void	wltpann(void)
{
	ft_putchar('-');
	while (g_zmln-- != 0)
		ft_putchar('0');
	g_str = itoa((int)g_inf.arg);
	ft_putstr(g_str + 1);
	free(g_str);
}

void	ft_pgtlon(void)
{
	if (g_nbrs > g_nbrz)
	{
		if (g_inf.moins)
			((int)g_inf.arg >= 0 ? wgtpam() : wgtpamann());
		else
			((int)g_inf.arg >= 0 ? wgtpanm() : wgtpanmann());
	}
	else
		((int)g_inf.arg >= 0 ? wltp() : wltpann());
}

void	ft_pltlon(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
	{
		if (g_inf.moins)
			((int)g_inf.arg >= 0 ? ifmaw() : ft_getronnawam());
		else
			((int)g_inf.arg < 0 ? ft_getronnanm() : ifnmaw());
	}
	else
	{
		if (g_inf.prec != 0 || (int)g_inf.arg != 0)
		{
			g_str = itoa((int)g_inf.arg);
			ft_putstr(g_str);
			free(g_str);
		}
	}
}

void	ft_treat_alld(void)
{
	if (g_inf.precr < 0 && g_inf.widthr > 0 && g_inf.zero)
		lastc();
	else if (g_nbrz <= ft_nlen((int)g_inf.arg))
		ft_pltlon();
	else
		ft_pgtlon();
}
