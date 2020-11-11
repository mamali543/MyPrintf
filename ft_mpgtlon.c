/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mpgtlon.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:20:31 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:27:26 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	wgtpanmann(void)
{
	g_smz--;
	while (g_smz-- > 0)
		ft_putchar(' ');
	ft_putchar('-');
	while (g_zmln-- > 0)
		ft_putchar('0');
	g_str = itoa((int)g_inf.arg);
	ft_putstr(g_str + 1);
	free(g_str);
}

void	wgtpanm(void)
{
	while (g_smz-- > 0)
		ft_putchar(' ');
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

void	wgtpamann(void)
{
	ft_putchar('-');
	while (g_zmln-- > 0)
		ft_putchar('0');
	g_str = itoa((int)g_inf.arg);
	ft_putstr(g_str + 1);
	free(g_str);
	g_smz--;
	while (g_smz-- > 0)
		ft_putchar(' ');
}

void	wgtpam(void)
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
	while (g_smz-- > 0)
		ft_putchar(' ');
}
