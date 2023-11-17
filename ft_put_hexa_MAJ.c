/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_MAJ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrijau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:54:30 by natrijau          #+#    #+#             */
/*   Updated: 2023/11/17 11:05:49 by natrijau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hexa_maj(int n)
{
	if (n > 15)
		ft_put_hexa_maj(n / 16);
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else if (n >= 10 && n < 16)
		ft_putchar(n + 55);
	if (n > 15)
		ft_put_hexa_maj(n % 16);
}
