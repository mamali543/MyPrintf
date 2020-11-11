/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_allu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:41:26 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:35:41 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	pltlon_u(void)
{
	if (g_nbrs > ft_nlen((unsigned int)g_inf.arg))
		(g_inf.moins ? ifmaw() : ifnmaw());
	else
	{
		if (g_inf.prec != 0 || (int)g_inf.arg != 0)
		{
			g_str = utoa((unsigned int)g_inf.arg);
			ft_putstr(g_str);
			free(g_str);
		}
	}
}

void	lcu(void)
{
	while (g_smln-- > 0)
		ft_putchar('0');
	g_str = utoa((unsigned int)g_inf.arg);
	ft_putstr(g_str);
	free(g_str);
}

void	ft_treat_allu(void)
{
	if (g_inf.precr < 0 && g_inf.widthr > 0 && g_inf.zero)
		lcu();
	else if (g_nbrz <= ft_nlen((unsigned int)g_inf.arg))
		pltlon_u();
	else
	{
		if (g_nbrs > g_nbrz)
			(g_inf.moins ? wgtpam() : wgtpanm());
		else
			wltp();
	}
}
