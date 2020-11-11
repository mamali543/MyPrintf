/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtreat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:41:03 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:25:01 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_treat_d(void)
{
	g_zmln = g_nbrz - ft_nlen((int)g_inf.arg);
	g_smln = g_nbrs - ft_nlen((int)g_inf.arg);
	g_smz = g_nbrs - g_nbrz;
	if (g_inf.prec_exist)
		ft_treat_alld();
	else if (g_inf.width > 0 && !g_inf.prec_exist)
		ft_treat_jw();
	else
	{
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	ft_treat_s(void)
{
	g_str = "(null)";
	g_nbrs = g_inf.width;
	g_nbrz = g_inf.prec;
	if ((char *)g_inf.arg == NULL)
		g_inf.arg = g_str;
	if (g_inf.prec_exist)
		ft_treat_alls();
	else if (g_inf.width && !g_inf.prec_exist)
		ft_treat_jws();
	else
		ft_putstr((char *)g_inf.arg);
}

void	ft_treat_c(void)
{
	int	i;

	i = g_inf.width;
	if (g_inf.moins && g_inf.width)
	{
		ft_putchar((int)g_inf.arg);
		while (--i)
			ft_putchar(' ');
	}
	else if (g_inf.moins)
		ft_putchar((int)g_inf.arg);
	else if (g_inf.width)
	{
		while (--i)
			ft_putchar(' ');
		ft_putchar((int)g_inf.arg);
	}
	else
		ft_putchar((int)g_inf.arg);
}

void	ft_treat_p(void)
{
	if ((unsigned long long)(g_inf.arg) == 0)
	{
		if (g_inf.prec_exist)
			g_str = "0x";
		else
			g_str = "0x0";
	}
	else
		g_str = hex_16((unsigned long long)(g_inf.arg));
	g_nbrs = g_inf.width;
	g_smln = g_nbrs - ft_strlen(g_str);
	ft_treat_allp();
}

void	ft_treat_x(void)
{
	g_zmln = g_nbrz - ft_strlen(hex((unsigned int)g_inf.arg));
	g_smln = g_nbrs - ft_strlen(hex((unsigned int)g_inf.arg));
	g_smz = g_nbrs - g_nbrz;
	if (g_inf.prec_exist)
		ft_treat_allx();
	else if ((unsigned int)g_inf.arg == 0)
		xargo();
	else if (g_inf.width > 0 && !g_inf.prec_exist)
		ft_treat_jwx();
	else
	{
		g_str = hex((unsigned int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}
