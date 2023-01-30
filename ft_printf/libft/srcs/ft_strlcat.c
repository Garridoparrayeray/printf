/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:41:08 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:29:48 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	unsigned int	c;
	unsigned int	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
int	main(void)
{
	char c[20] = "hola";
	
	printf("%u\n", ft_strlcat(c, "Mundo", 6));
	printf("%lu\n", strlcat(c, "Mundo", 6));

}*/
