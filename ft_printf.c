/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:51:57 by                   #+#    #+#             */
/*   Updated: 2021/10/26 17:51:57 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "ft_me.c"

int	sim_pom(char c, va_list ap)
{
	int	b1;

	b1 = 0;
	if (c == 'c')
		b1 = ft_putchar555(va_arg(ap, int));
	if (c == 'u')
		b1 = cheak_u(ap);
	if (c == 'd' || c == 'i')
		b1 = cheak_d_i_u(va_arg(ap, int));
	if (c == 'p')
		b1 = ft_PP(va_arg(ap, unsigned long long int));
	if (c == 's')
		b1 = ft_print_str(va_arg(ap, char *));
	if (c == 'x')
		b1 = cheak_xX16(va_arg(ap, unsigned int), 1);
	if (c == 'X')
		b1 = cheak_xX16(va_arg(ap, unsigned int), 2);
	if (c == '%')
	{
		write(1, "%", 1);
		b1++;
	}
	return (b1);
}

int	ft_printf(const char *oor, ...)
{
	int		i;
	int		b;
	int		j;
	va_list	ap;

	va_start(ap, oor);
	i = 0;
	b = 0;
	j = ft_strlen_b(oor);
	while (oor[i])
	{
		if (oor[i] == '%')
		{
			b = b + sim_pom(oor[i + 1], ap);
			i = i + 2;
		}
		else
			write(1, &oor[i++], 1);
	}
	va_end(ap);
	return (b + j);
}
