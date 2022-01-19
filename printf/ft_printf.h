/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: singulab <singulab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:06:12 by gdelarme          #+#    #+#             */
/*   Updated: 2022/01/04 18:39:47 by singulab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar_len(char c, int fd);
int		ft_putstr_len(char *str, int fd);
int     ft_base(long long int n, char *base);
int     ft_base_pointer(unsigned long int n, char *base);
int     ft_pointer(unsigned long int n);

#endif
