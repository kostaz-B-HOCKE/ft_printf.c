/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_me.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:52:02 by                   #+#    #+#             */
/*   Updated: 2021/10/26 17:52:02 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (s[i])
	{
		while (s[i])
		{
			write(1, &(s[i]), 1);
			i++;
		}
	}
	return (i);
}

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(1, &(s[i]), 1);
			i++;
		}
	}
	return (i);
}

int	ft_PP(unsigned long long int p)
{
	int	i;

	i = 1;
	write(1, "0x", 2);
	ft_PP2(p);
	while (p >= 16)
	{
		p = p / 16;
		i++;
	}
	if ((int)p < 0 && (long long int)p >= -2147483647)
		return (10);
	else if ((long long int)p < 0)
		return (18);
	return (i + 2);
}

void	ft_PP2(unsigned long long int n)
{
	unsigned long long int	c;

	if (n >= 16)
	{
		ft_PP2(n / 16);
		c = (n % 16);
		if (c >= 0 && c <= 9)
			ft_putchar((c + '0'));
		else if (c >= 10 && c <= 15)
			ft_putchar((c - 10 + 'a'));
	}
	else if (n < 16)
	{
		if (n >= 0 && n <= 9)
			ft_putchar((n + '0'));
		else if (n >= 10 && n <= 15)
			ft_putchar(((n - 10) + 'a'));
	}
}
