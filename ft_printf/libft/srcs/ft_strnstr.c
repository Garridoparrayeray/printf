/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:23:48 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:43:12 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				x;

	x = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		x = 0;
		while (haystack[i] == needle[x] && haystack[i] && i < len)
		{
			i++;
			x++;
		}
		if (!needle[x])
			return ((char *)&haystack[i - x]);
		i = (i - x) + 1;
	}
	return (NULL);
}
/*
int	main(void)
{	
	printf("%s\n", ft_strnstr("Holaaa", "Hola", 6));
	printf("%s\n", strnstr("Holaaa", "Hola", 6));
}*/
