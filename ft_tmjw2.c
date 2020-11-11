/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmjw2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:29:16 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:32:07 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	jwaz(void)
{
	while (g_smln-- > 0)
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

void	jwazann(void)
{
	ft_putchar('-');
	g_smln--;
	while (g_smln-- > 0)
		ft_putchar('0');
	g_str = itoa((int)g_inf.arg);
	ft_putstr(g_str + 1);
	free(g_str);
}
