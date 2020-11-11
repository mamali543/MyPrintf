/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:48:04 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:26:31 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	lastc(void)
{
	if ((int)g_inf.arg < 0)
	{
		ft_putchar('-');
		g_smln--;
		while (g_smln-- > 0)
			ft_putchar('0');
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str + 1);
		free(g_str);
	}
	else
	{
		while (g_smln-- > 0)
			ft_putchar('0');
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}
