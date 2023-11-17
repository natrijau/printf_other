/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrijau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:12 by natrijau          #+#    #+#             */
/*   Updated: 2023/11/17 11:13:59 by natrijau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *list, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_nbr(int n);
void	ft_put_hexa(char *s);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_put_hexa_maj(int n);
void	ft_put_hexa_min(int n);
void	ft_pointer_hexa(unsigned long long n);
size_t	ft_strlen(const char *str);
#endif
