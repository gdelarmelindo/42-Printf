/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:08:56 by gdelarme          #+#    #+#             */
/*   Updated: 2022/02/14 15:10:46 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base_pointer(unsigned long int n, char *base)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len += ft_putchar_len('-', 1);
	}
	if (n >= (unsigned long int)ft_strlen(base))
		len += ft_base(n / ft_strlen(base), base);
	len += ft_putchar_len(base[n % ft_strlen(base)], 1);
	return (len);
}
