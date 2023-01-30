/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:21:39 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:05:58 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*include <string.h>*/
#include "libft.h"

/*#include <stdio.h>*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			i;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[20] = "holAA";
	char	b[20] = "hola";
	printf("%d\n", memcmp(a, b, 5));
	printf("%d\n", ft_memcmp(a, b, 5));
}*/
