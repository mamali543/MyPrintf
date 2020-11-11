/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_allx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:22:24 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:37:07 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	lcx(void)
{
	while (g_smln-- > 0)
		ft_putchar('0');
	g_str = hex((unsigned int)g_inf.arg);
	ft_putstr(g_str);
	free(g_str);
}

void	ft_treat_allx(void)
{
	if (g_inf.precr < 0 && g_inf.widthr > 0 && g_inf.zero)
		lcx();
	else if (g_nbrz < ft_nlen((int)g_inf.arg))
	{
		if (g_nbrs > ft_nlen((int)g_inf.arg))
			(g_inf.moins ? ifmaw() : ifnmaw());
		else
		{
			if (g_inf.prec != 0 || (int)g_inf.arg != 0)
			{
				g_str = hex((unsigned int)g_inf.arg);
				ft_putstr(g_str);
				free(g_str);
			}
		}
	}
	else
	{
		if (g_nbrs > g_nbrz)
			(g_inf.moins ? wgtpam() : wgtpanm());
		else
			wltp();
	}
}

void	ft_puthexn(void)
{
	g_str = hex((unsigned int)g_inf.arg);
	ft_putstr(g_str);
	free(g_str);
}

void	ft_treat_jwx(void)
{
	if (g_inf.moins)
	{
		if ((size_t)g_nbrs > ft_strlen(hex((int)(g_inf.arg))))
			jwam();
		else
			ft_puthexn();
	}
	else if (g_inf.zero)
	{
		if (g_nbrs > ft_nlen((int)g_inf.arg))
			jwaz();
		else
			ft_puthexn();
	}
	else
	{
		if ((size_t)g_nbrs > ft_strlen(hex((int)g_inf.arg)))
			jw();
		else
			ft_puthexn();
	}
}

void	xargo(void)
{
	if (g_inf.width)
	{
		g_smln = g_nbrs - ft_nlen((unsigned int)g_inf.arg);
		if (g_inf.moins)
		{
			ft_putchar('0');
			while (g_smln--)
				ft_putchar(' ');
		}
		else if (g_inf.zero)
		{
			while (g_smln--)
				ft_putchar('0');
			ft_putchar('0');
		}
		else
		{
			while (g_smln--)
				ft_putchar(' ');
			ft_putchar('0');
		}
	}
	else
		ft_putchar('0');
}
