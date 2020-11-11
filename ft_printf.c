/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 22:47:58 by mamali            #+#    #+#             */
/*   Updated: 2020/11/10 01:22:57 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	initial(void)
{
	g_inf.width = 0;
	g_inf.prec = 0;
	g_inf.moins = 0;
	g_inf.zero = 0;
	g_inf.cnvrg = 0;
	g_inf.prec_exist = 0;
	g_inf.arg = NULL;
}

void	check_chars(const char *format)
{
	while (format[g_pos] != '%' && format[g_pos])
	{
		ft_putchar(format[g_pos]);
		g_pos++;
	}
}

void	ft_treat_u(void)
{
	if ((int)g_inf.arg < 0)
	{
		g_smln = g_nbrs - 10;
		g_zmln = g_nbrz - 10;
		g_smz = g_nbrs - 10;
	}
	else
	{
		g_smln = g_nbrs - ft_nlen((int)g_inf.arg);
		g_zmln = g_nbrz - ft_nlen((int)g_inf.arg);
		g_smz = g_nbrs - g_nbrz;
	}
	if (g_inf.prec_exist)
		ft_treat_allu();
	else if (g_inf.width > 0 && !g_inf.prec_exist)
		ft_treat_jwu();
	else
	{
		g_str = utoa((unsigned int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	last_case_s(void)
{
	if ((size_t)g_inf.width > ft_strlen((char*)g_inf.arg) &&
	(g_inf.widthr > 0))
		while (g_smln--)
			ft_putchar(' ');
	ft_putstr((char *)g_inf.arg);
	if ((size_t)g_inf.width > ft_strlen((char*)g_inf.arg) &&
	(g_inf.widthr <= 0))
		while (g_smln--)
			ft_putchar(' ');
}

int		ft_printf(const char *format, ...)
{
	va_list		list;

	va_start(list, format);
	g_pos = 0;
	g_ret = 0;
	while (format[g_pos])
	{
		initial();
		check_chars(format);
		check_flags(format, list);
	}
	return (g_ret);
	va_end(list);
}
