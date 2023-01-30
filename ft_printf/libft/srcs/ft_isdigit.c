/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:06 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 14:03:58 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9' )
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit('a'));
}
*/
