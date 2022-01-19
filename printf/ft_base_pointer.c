/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singulab <singulab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:21:45 by singulab          #+#    #+#             */
/*   Updated: 2022/01/04 18:34:37 by singulab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_base_pointer(unsigned long int n, char *base)
{
    int len;

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
