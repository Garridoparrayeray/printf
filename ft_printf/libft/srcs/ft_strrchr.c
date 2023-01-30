/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:08:05 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/12 16:51:29 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 OPCION 1

	int	i;
	const char *found;

	i = 0;

	while (s[i])
	{
		if (s[i] == (char)c)
			found = &s[i];
		i++;
	}
	if ((char)c == 0)
			return ((char*)s);
	return ((char *)found);
}*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	index;
	char			*str;

	index = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *) &s[index]);
	str = (char *)s + index - 1;
	while (index > 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
		index--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("Holaooooaaaaa", 'p'));
}*/
