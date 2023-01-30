/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:25:38 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 13:37:24 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

int	ft_atoi(const	char *str)
{
	int	n;
	int	negative;
	int	i;

	n = 0;
	negative = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if (negative)
		n *= -1;
	return (n);
}
/*
int	main(void)
{
	char	str[] = "--+5474";
	printf("%d\n", ft_atoi(str));
}*/
