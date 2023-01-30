/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:44:16 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:31:32 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (dstsize < 1)
		return (res);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char s[20] = "asas";
	printf ("%s\n", s);
	printf ("%zu\n", ft_strlcpy(s, "Mundo", 4));
	//printf ("%zu\n", strlcpy(s, "Mundo", 4));
	printf ("%s\n", s);
	size_t i;
	i = 0;

	if (dstsize < 1)
		return (0);
	if (src[i])
	{	
		while (src[i] && (i <= dstsize))
		{
			dst[i] = src[i];
			i++;
		}	
	}
	dst[i] = '\0';
	return (i);
}*/
