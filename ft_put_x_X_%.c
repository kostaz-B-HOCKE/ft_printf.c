/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x_X_%.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:52:12 by                   #+#    #+#             */
/*   Updated: 2021/10/26 17:52:12 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar555(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	cheak_xX16(unsigned int n, int e)
{
	int	i;

	i = 1;
	ft_putnbr_x16(n, e);
	while (n > 15)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_x16(unsigned int n, int e)
{
	int	c;

	if (n >= 16)
	{
		ft_putnbr_x16(n / 16, e);
		c = (n % 16);
		if (c >= 0 && c <= 9)
			ft_putchar((c + '0'));
		else if (c >= 10 && c <= 15 && e == 1)
			ft_putchar((c - 10 + 'a'));
		else if (c >= 10 && c <= 15 && e == 2)
			ft_putchar((c - 10 + 'A'));
	}
	else if (n < 16)
	{
		if (n >= 0 && n <= 9)
			ft_putchar((n + '0'));
		else if (n >= 10 && n <= 15 && e == 1)
			ft_putchar(((n - 10) + 'a'));
		else if (n >= 10 && n <= 15 && e == 2)
			ft_putchar(((n - 10) + 'A'));
	}
}

int	ft_strlen_b(const char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			j = j + 2;
			i++;
		}
		i++;
	}
	return (i - j);
}
