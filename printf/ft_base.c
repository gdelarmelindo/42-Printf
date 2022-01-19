/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singulab <singulab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:21:45 by singulab          #+#    #+#             */
/*   Updated: 2022/01/04 18:34:29 by singulab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_base(long long int n, char *base)
{
    int len;

    len = 0;
    if (n == -2147483648)
    {
        len = ft_putstr_len("-2147483648", 1);
        return (len);
    }
    else if (n < 0)
    {
        n *= -1;
        len += ft_putchar_len('-', 1);
    }
    if (n >= (long long int)ft_strlen(base))
        len += ft_base(n / ft_strlen(base), base);
    len += ft_putchar_len(base[n % ft_strlen(base)], 1);
    return (len);
}
