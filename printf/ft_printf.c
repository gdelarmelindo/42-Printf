/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:14:35 by gdelarme          #+#    #+#             */
/*   Updated: 2022/02/14 15:07:39 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(char c, va_list args)
{
	int		len_arg;

	len_arg = 0;
	if (c == 'c')
		len_arg += ft_putchar_len(va_arg(args, int), 1);
	if (c == 's')
		len_arg += ft_putstr_len(va_arg(args, char *), 1);
	if (c == 'p')
		len_arg += ft_pointer(va_arg(args, unsigned long int));
	if (c == 'd')
		len_arg += ft_base(va_arg(args, int), "0123456789");
	if (c == 'i')
		len_arg += ft_base(va_arg(args, int), "0123456789");
	if (c == 'u')
		len_arg += ft_base(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		len_arg += ft_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		len_arg += ft_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		len_arg += ft_putchar_len(c, 1);
	return (len_arg);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len_printed;
	int		i;

	if (!str)
		return (0);
	va_start(args, str);
	len_printed = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len_printed += check_arg(str[i], args);
		}
		else
		{
			ft_putchar_len(str[i], 1);
			len_printed++;
		}
		i++;
	}
	va_end(args);
	return (len_printed);
}
