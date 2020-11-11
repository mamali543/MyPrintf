/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_allp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:03:03 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:34:45 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	treat_allpwp(void)
{
	if ((size_t)g_inf.width > ft_strlen(g_str))
	{
		while (g_smln--)
			ft_putchar(' ');
		ft_putstr(g_str);
		if (!(ft_strcmp(g_str, "0x0") || ft_strcmp(g_str, "0x")))
			free(g_str);
	}
	else
	{
		ft_putstr(g_str);
		if (!(ft_strcmp(g_str, "0x0") || ft_strcmp(g_str, "0x")))
			free(g_str);
		while (g_inf.prec--)
			ft_putchar('0');
	}
}

void	ft_treat_allp(void)
{
	if (g_inf.prec)
		treat_allpwp();
	else if ((size_t)g_inf.width > ft_strlen(g_str))
	{
		if (g_inf.moins)
		{
			ft_putstr(g_str);
			while (g_smln--)
				ft_putchar(' ');
		}
		else
		{
			while (g_smln--)
				ft_putchar(' ');
			ft_putstr(g_str);
		}
		if (!(ft_strcmp(g_str, "0x0") || ft_strcmp(g_str, "0x")))
			free(g_str);
	}
	else
	{
		ft_putstr(g_str);
		if (!(ft_strcmp(g_str, "0x0") || ft_strcmp(g_str, "0x")))
			free(g_str);
	}
}
