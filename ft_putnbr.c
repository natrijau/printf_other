/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrijau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:17:00 by natrijau          #+#    #+#             */
/*   Updated: 2023/11/17 11:47:20 by natrijau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void	ft_putn(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0 && n >= -2147483647)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putn(n / 10);
		ft_putn(n % 10);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
}

int	ft_nbr(int n)
{
	int	count;
	int	nb;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	nb = n;
	while (nb >= 0)
	{
		nb = nb / 10;
		count++;
	}
	ft_putn(n);
	return (count);
}
*/
#include <stdio.h>
void	ft_putn(int n)
{

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0 && n >= -2147483647)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putn(n / 10);
		ft_putn(n % 10);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
}

int	ft_nbr(int n)
{
	int	i = 0;
	int	nb;
	if(n < 0)
	{
		i += 1;
		n *= -1;
	}
	nb = n;
	while(nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	ft_putn(n);
	return (i);
}
