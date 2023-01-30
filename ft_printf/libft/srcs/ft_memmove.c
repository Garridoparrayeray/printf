/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:03:52 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:13:08 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*#include <stdio.h>
#include <string.h>*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;

	i = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (source < dest)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
	{
		while (len--)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char c[20] = "Holaaa";
	char b[20] = "ASD";
	printf("%s\n", ft_memmove(c, b, 3));
//	printf("%s\n", memmove(c, b, 3));
}*/
