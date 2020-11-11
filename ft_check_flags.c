/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:20:50 by mamali            #+#    #+#             */
/*   Updated: 2020/11/02 19:40:39 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_treat(void)
{
	g_nbrs = g_inf.width;
	g_nbrz = g_inf.prec;
	if (g_inf.cnvrg == 'd' || g_inf.cnvrg == 'i')
		ft_treat_d();
	if (g_inf.cnvrg == 'c')
		ft_treat_c();
	if (g_inf.cnvrg == 's')
		ft_treat_s();
	if (g_inf.cnvrg == 'p')
		ft_treat_p();
	if (g_inf.cnvrg == 'u')
		ft_treat_u();
	if (g_inf.cnvrg == '%')
		ft_treat_percentage();
	if (g_inf.cnvrg == 'x' || g_inf.cnvrg == 'X')
		ft_treat_x();
}

void	minus_zero(const char *format)
{
	while (format[g_pos] == '-' || format[g_pos] == '0')
	{
		if (format[g_pos] == '-')
		{
			g_inf.moins = 1;
			g_pos++;
		}
		else
		{
			g_inf.zero = 1;
			g_pos++;
		}
	}
	if (g_inf.moins == 1)
		g_inf.zero = 0;
}

void	width(const char *format, va_list list)
{
	if (ft_isdigit(format[g_pos]) || format[g_pos] == '*')
	{
		if (ft_isdigit(format[g_pos]))
		{
			g_inf.width = ft_atoi(format + g_pos);
			g_inf.widthr = g_inf.width;
			g_pos += ft_nlen(g_inf.width);
		}
		else
		{
			g_inf.width = va_arg(list, int);
			g_inf.widthr = g_inf.width;
			if (g_inf.width < 0)
			{
				g_inf.width *= -1;
				g_inf.moins = 1;
			}
			g_pos++;
		}
	}
}

void	prec(const char *format, va_list list)
{
	if (ft_isdigit(format[g_pos]) || format[g_pos] == '*')
	{
		if (ft_isdigit(format[g_pos]))
		{
			g_inf.prec = ft_atoi(format + g_pos);
			while (ft_isdigit(format[g_pos]))
				g_pos++;
		}
		else
		{
			g_inf.prec = va_arg(list, int);
			g_inf.precr = g_inf.prec;
			if (g_inf.prec < 0)
				g_inf.prec *= 0;
			g_pos++;
		}
	}
}

void	check_flags(const char *format, va_list list)
{
	while (format[g_pos] == '%' && format[g_pos + 1] == '%')
	{
		write(1, &format[g_pos], 1);
		g_pos += 2;
		g_ret++;
	}
	if (format[g_pos] == '%')
	{
		g_pos++;
		minus_zero(format);
		width(format, list);
		if (format[g_pos] == '.')
		{
			g_inf.prec_exist = 1;
			g_pos++;
			prec(format, list);
		}
		g_inf.cnvrg = format[g_pos++];
		g_inf.arg = va_arg(list, void *);
	}
	ft_treat();
}
