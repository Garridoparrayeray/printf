/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:07:33 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:06:47 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	i = 0;
	dest = dst;
	source = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char c[20] = "Hola";
	char a[20] = "AAAAA";
	printf("%s\n", ft_memcpy(c, a, 4));
}*/
