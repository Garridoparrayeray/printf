/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:48:57 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:02:54 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	if (n)
	{
		while (n--)
		{
			if (str[i] == (char)c)
				return (&str[i]);
			i++;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char c[10] = "HolA";
	int a = 65;
	printf("%s\n", ft_memchr(c, a, 4));
}*/
