/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singulab <singulab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:22:57 by gdelarme          #+#    #+#             */
/*   Updated: 2022/01/04 17:37:58 by singulab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *str, int fd)
{
	int	len;

	len = 0;
	if (!str)
	{
		len = write(fd, "(null)", 6);
		return (len);
	}
	while (str[len])
		len++;
	write(fd, str, len);
	return (len);
}
