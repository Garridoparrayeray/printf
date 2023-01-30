/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:52:13 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:53:16 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*char	*ft_strtrim (char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*mem;
	
	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set,s1[end]))
		end--;
	mem = (char*)malloc(sizeof(char*) * (end - start + 1));
	while (start <= end)
	{
		mem[i] = s1[start];
		i++;
		start++;
	}
	mem[i] = '\0';
	return (mem);
}*/
/* FORMA 2, más simplificada*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("Casasastsastaataa", "sCa"));
}*/
