/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i_d_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:52:06 by                   #+#    #+#             */
/*   Updated: 2021/10/26 17:52:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cheak_d_i_u(int n)
{
	int	i;

	i = 0;
	ft_putnbr(n);
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i + 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2");
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else if (n < 10)
		ft_putchar(n + '0');
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_put_u(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_u(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else if (n < 10)
		ft_putchar(n + '0');
}

int	cheak_u(va_list ap)
{
	unsigned int	u;
	int				i;

	i = 1;
	u = va_arg(ap, unsigned int);
	ft_put_u(u);
	while (u > 9)
	{
		u = u / 10;
		i++;
	}
	if ((int)u < 0)
		return (10);
	return (i);
}
