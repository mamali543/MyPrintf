/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_jwd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:22:37 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:37:49 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	treatjw(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
	{
		if ((int)g_inf.arg >= 0)
			jw();
		else
			jwann();
	}
	else
	{
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	treatjwwz(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
	{
		if ((int)g_inf.arg >= 0)
			jwaz();
		else
			jwazann();
	}
	else
	{
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	treatjwwm(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
	{
		if ((int)g_inf.arg >= 0)
			jwam();
		else
			jwamann();
	}
	else
	{
		g_str = itoa((int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	ft_treat_jw(void)
{
	if (g_inf.moins)
		treatjwwm();
	else if (g_inf.zero)
		treatjwwz();
	else
		treatjw();
}
