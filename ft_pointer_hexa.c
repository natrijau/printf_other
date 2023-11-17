/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrijau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:30:17 by natrijau          #+#    #+#             */
/*   Updated: 2023/11/17 11:06:13 by natrijau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_hexa(unsigned long long n)
{
	if (n > 15)
		ft_hexa(n / 16);
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else if (n >= 10 && n < 16)
		ft_putchar(n + 87);
	if (n > 15)
		ft_hexa(n % 16);
}

void	ft_pointer_hexa(unsigned long long n)
{
	ft_putstr("0x");
	ft_hexa(n);
}
