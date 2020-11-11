/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_jwu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 04:31:43 by mamali            #+#    #+#             */
/*   Updated: 2020/11/01 18:38:40 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	jwamu(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
		jwam();
	else
	{
		g_str = utoa((unsigned int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	jwazu(void)
{
	if (g_nbrs > ft_nlen((int)g_inf.arg))
		jwaz();
	else
	{
		g_str = utoa((unsigned int)g_inf.arg);
		ft_putstr(g_str);
		free(g_str);
	}
}

void	ft_treat_jwu(void)
{
	if (g_inf.moins)
		jwamu();
	else if (g_inf.zero)
		jwazu();
	else
	{
		if (g_nbrs > ft_nlen((int)g_inf.arg))
			jw();
		else
		{
			g_str = utoa((unsigned int)g_inf.arg);
			ft_putstr(g_str);
			free(g_str);
		}
	}
}
