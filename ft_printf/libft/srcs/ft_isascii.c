/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:24:06 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 14:03:41 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(c);
	return(0);
}*/
/*
int	main(void)
{
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii('a'));
}*/
