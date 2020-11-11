/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmjw1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:28:38 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:31:24 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	jw(void)
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

void	jwann(void)
{
	g_smln--;
	jw();
}

void	jwam(void)
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

void	jwamann(void)
{
	g_smln--;
	jwam();
}
