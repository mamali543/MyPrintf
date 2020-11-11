/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:59:24 by mamali            #+#    #+#             */
/*   Updated: 2020/11/04 18:41:11 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	s_pgtlos(void)
{
	if (g_inf.moins)
	{
		ft_putstr((char *)g_inf.arg);
		while (g_smln-- != 0)
			ft_putchar(' ');
	}
	else
	{
		while (g_smln-- != 0)
			ft_putchar(' ');
		ft_putstr((char *)g_inf.arg);
	}
}

void	s_pltlos(void)
{
	if (g_nbrs > g_nbrz)
	{
		if (g_inf.moins)
		{
			printlen(g_nbrz, (char *)g_inf.arg);
			while (g_smz-- != 0)
				ft_putchar(' ');
		}
		else
		{
			while (g_smz-- != 0)
				ft_putchar(' ');
			printlen(g_nbrz, (char *)g_inf.arg);
		}
	}
	else
		printlen(g_nbrz, (char *)g_inf.arg);
}

void	treat_jwsawgtlos(void)
{
	if (g_inf.moins)
	{
		ft_putstr((char *)g_inf.arg);
		while (g_smln-- != 0)
			ft_putchar(' ');
	}
	else
	{
		if (g_inf.zero)
		{
			while (g_smln-- != 0)
				ft_putchar('0');
		}
		else
		{
			while (g_smln-- != 0)
				ft_putchar(' ');
		}
		ft_putstr((char *)g_inf.arg);
	}
}

void	ft_treat_jws(void)
{
	g_smln = g_nbrs - ft_strlen((char *)g_inf.arg);
	if ((size_t)g_inf.width > ft_strlen((char *)g_inf.arg))
		treat_jwsawgtlos();
	else
		ft_putstr((char *)g_inf.arg);
}

void	ft_treat_alls(void)
{
	g_zmln = g_nbrz - ft_nlen((int)g_inf.arg);
	g_smln = g_nbrs - ft_strlen((char *)g_inf.arg);
	g_smz = g_nbrs - g_nbrz;
	if (!((size_t)g_inf.prec <= ft_strlen((char *)g_inf.arg)))
	{
		if ((size_t)g_inf.width > ft_strlen((char *)g_inf.arg))
			s_pgtlos();
		else
			ft_putstr((char *)g_inf.arg);
	}
	else
	{
		if (g_inf.precr < 0)
			last_case_s();
		else
			s_pltlos();
	}
}
