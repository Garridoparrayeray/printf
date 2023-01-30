/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:17:54 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:19:42 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		num = -1 * n;
		ft_putchar_fd ('-', fd);
	}
	else
		num = n;
	if (num >= 10)
		ft_putnbr_fd (num / 10, fd);
	ft_putchar_fd ((num % 10) + '0', fd);
}
