/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singulab <singulab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:50:41 by singulab          #+#    #+#             */
/*   Updated: 2022/01/04 18:32:39 by singulab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer(unsigned long int n)
{
    char *base;
    int len;

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
