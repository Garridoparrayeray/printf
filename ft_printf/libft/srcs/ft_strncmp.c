/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:14:10 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:41:44 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include "libft.h"
/*int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	size_t			i;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while ((s11[i] || s22[i]) && (i < n))
	{
		if (s11[i] < s22[i])
			return (-1);
		if (s11[i] > s22[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_strncmp("Hola8", "Hola", '5'));
}*/
