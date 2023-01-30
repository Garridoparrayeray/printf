/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:06:03 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/26 17:24:54 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include <stddef.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (c);
}

int    ft_putstr(const char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
	return(i);
}
int	ft_printstr(const char *s)
{
	int	i;

	i = 0;
	if(s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while(s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return(i);
}
int	ft_putnbr(int i)
{
	if(i == -2147483648)
		return(-2147483648);
	if(i < 0)
	{
		ft_putchar('-');
		i = -i;
	}else if(i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}else 
		ft_putchar(i + 48);
	return(i);
}
int	ft_printnumb(int n)
{
	int	len;
	char *num;
	
	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return(len);
}