/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrijau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:34:18 by natrijau          #+#    #+#             */
/*   Updated: 2023/11/17 12:11:26 by natrijau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_char(char c)
{
	return (ft_putchar(c));
}

int	format_string(char *s)
{
	if (!s)
		return (0);
	return (ft_putstr(s));
}

int	format_decimal(int n)
{
	return (ft_nbr(n));
}

int	format_unsigned_decimal(unsigned int n)
{
	ft_putnbr_unsigned(n);
	return (1);
}

int	format_hexa_maj(int n)
{
	ft_put_hexa_maj(n);
	return (1);
}

int	format_hexa_min(int n)
{
	ft_put_hexa_min(n);
	return (1);
}

int	format_pointer_hexa(unsigned long long n)
{
	ft_pointer_hexa(n);
	return (1);
}
#include <stdio.h>
int	list_format(va_list ptr, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += format_char(va_arg(ptr, int));
	if (c == 's')
		i += format_string(va_arg(ptr, char *));
	if (c == 'd')
		i += format_decimal(va_arg(ptr, int));
	if (c == 'i')
		i += format_decimal(va_arg(ptr, int));
	if (c == 'u')
		format_unsigned_decimal(va_arg(ptr, unsigned int));
	if (c == 'x')
		format_hexa_min(va_arg(ptr, int));
	if (c == 'X')
		format_hexa_maj(va_arg(ptr, int));
	if (c == 'p')
		format_pointer_hexa(va_arg(ptr, unsigned long long));
	//printf("i vaut %d",i);
	return (i);
}

int	ft_printf(const char *list, ...)
{
	int		i;
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, list);
	i = 0;
	while (list[i])
	{
		if (list[i] == '%' && list[i + 1] == '%')
		{
			ft_putchar('%');
			i += 2;
			len++;
			//ft_putchar(list[i]);
		}
		else if (list[i] != '%' && list[i - 1] != '%')
			ft_putchar(list[i]);
		else if (list[i] == '%' && list[i + 1] != '%')
		{
			len += list_format(ptr, list[i + 1]);
			i++;
		}
		len++;
		i++;
	}
	va_end(ptr);
	printf("\nlen vaut %d\n", len);
	return (len);
}
//%c imprime 1 char -----------------------OK

//%s imprime une string --------------------OK

//%p l'argument imprime au format hexadecimal ------------------------OK

//%d imprime nbre decimal -------------------OK

//%i imprime un entier en base 10

//%u Imprime un nombre décimal non signé (base 10) --------------------OK

//%x Imprime un nombre au format minuscule hexadécimal (base 16).

//%X Imprime un nombre au format majuscule hexadécimal (base 16)

//%% Imprime un signe de pourcentage. ----------------------OK

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char s;

	s = 's';
	(void)ac;
	if (ac == 4)
		ft_printf("d renvoi %d\nc renvoi %c\ns renvoi %s\ni renvoi %i\n", atoi(av[1]), 'c', av[2], atoi(av[3]));
		/*
		ft_printf("c renvoi  :%c\ns renvoi  :%s\ni renvoi  :%i\nd renvoi  :%d\nu renvoi  :%u\nx renvoi  :%x\nX renvoi  :%X\np renvoi  :%p", 'c', av[1], 42, 29, -45, atoi(av[1]), atoi(av[2]), &s);*/
	if (ac == 5)
		printf("La vrai fonction printf : \n%%c renvoi  :%c\n%%s renvoi  :%s\n%%p renvoi  :%i\n%%d renvoi  :%d\n%%u renvoi  :%u\n%%x renvoi  :%x\n%%X renvoi  :%X\n%%p renvoi  :%p", 'c', av[1], 42, 29, -45, atoi(av[1]), atoi(av[2]), &s);
	return (0);
}
