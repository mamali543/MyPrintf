/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:09:59 by mamali            #+#    #+#             */
/*   Updated: 2020/11/04 18:36:56 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct	s_data
{
	int			width;
	int			widthr;
	int			prec;
	int			precr;
	int			prec_exist;
	int			moins;
	int			zero;
	char		cnvrg;
	void		*arg;
	long long	arg1;
}				t_data;

t_data			g_inf;

char			*g_str;
long			g_un;
int				g_pos;
int				g_ret;
int				g_nbrs;
int				g_nbrz;
int				g_smln;
int				g_zmln;
int				g_smz;

int				ft_printf(const char *s, ...);
void			check_flags(const char *format, va_list list);
void			wltp(void);
void			ft_treat_jwu(void);
void			ft_treat_jwx(void);
void			ft_treat_s(void);
void			ft_treat_u(void);
void			ft_treat_x(void);
void			ft_putstr(const char *s);
void			ft_treat_allx(void);
void			ft_treat_allu(void);
char			*hex_16(unsigned long long n);
char			*hex(unsigned int n);
int				ft_nlen(int n);
int				ft_len(long n);
int				ft_atoi(const char *str);
char			*ft_strchr(const char *s, int c);
void			resetstruct(t_data inf);
void			ft_putchar(char c);
void			ft_treat_percentage(void);
int				ft_isdigit(int c);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_treat_d(void);
void			ft_treat_p(void);
void			ft_treat(void);
char			*itoa(int n);
char			*utoa(long long n);
void			ft_treat_alld(void);
void			ft_pltlon(void);
void			ft_pgtlon(void);
void			ft_treat_jw(void);
void			ifmaw(void);
void			ft_getronnanm(void);
void			ifnmaw(void);
void			ft_getronnawam(void);
void			jwam(void);
void			jwamann();
void			jwazann(void);
void			jwaz(void);
void			jw(void);
void			jwann(void);
void			treatjw(void);
void			treatjwwz(void);
void			treatjwwm(void);
void			wgtpam(void);
void			wgtpamann(void);
void			wgtpanm(void);
void			wgtpanmann(void);
void			lastc(void);
void			ft_treat_c(void);
void			s_pltlos(void);
size_t			ft_strlen(char *s);
void			s_pgtlos(void);
void			nullarg(va_list list);
void			printlen(int len, char *s);
char			*ft_toupper(char *s);
void			treat_jwsawgtlos(void);
void			treat_percentagewz(void);
void			ft_treat_alls(void);
void			ft_treat_jws(void);
void			ft_treat_allp(void);
void			treat_allpwp(void);
void			xargo(void);
void			last_case_s(void);

#endif
