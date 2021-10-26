/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:52:23 by                   #+#    #+#             */
/*   Updated: 2021/10/26 17:52:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(int c);
int		ft_strlen_b(const char *s);
int		ft_print_str(char *s);
void	ft_putnbr(int n);
int		ft_putstr(char *s);
int		cheak_d_i_u(int n);
int		cheak_xX16(unsigned int n, int e);
void	ft_putnbr_x16(unsigned int n, int e);
void	ft_minus_xX16(int n, int e);
void	ft_PP2(unsigned long long int n);
int		ft_PP(unsigned long long int p);
int		cheak_u(va_list ap);
void	ft_put_u(unsigned int n);
int		ft_putchar555(int c);
int		ft_printf(const char *oor, ...);

#endif
