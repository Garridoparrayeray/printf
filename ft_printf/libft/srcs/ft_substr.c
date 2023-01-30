/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:35:53 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/12 16:53:18 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/	
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	mem = (char *)malloc (sizeof(*s) * (len + 1));
	if (!mem)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			mem[j] = s[i];
			j++;
		}
		i++;
	}
	mem[j] = '\0';
	return (mem);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("Hola", 1, 6));	
}*/
