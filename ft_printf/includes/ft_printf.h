/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:32:03 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/26 17:14:39 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# include "libft.h"
#include <stdarg.h>
int    ft_putstr(char const *s);
int    ft_putchar(char c);
int	ft_putnbr(int i);
char    *ft_utoa(unsigned int n);
int	ft_printstr(const char *s);

#endif