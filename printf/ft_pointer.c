/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:13:40 by gdelarme          #+#    #+#             */
/*   Updated: 2022/02/14 15:15:23 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (!n)
	{
		len = ft_putstr_len("0x0", 1);
		return (len);
	}
	else
		len = ft_putstr_len("0x", 1);
	len += ft_base_pointer(n, base);
	return (len);
}
