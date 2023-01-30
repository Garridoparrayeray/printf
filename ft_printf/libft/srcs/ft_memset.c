/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:44:51 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:15:18 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*#include <stdio.h>*/
void	*ft_memset(void *s, int c, size_t n)
{
	char			*ps;
	unsigned char	cchar;

	if (n == 0)
		return (s);
	ps = s;
	cchar = (unsigned char)c;
	while (n-- > 0)
	{
		*ps++ = cchar;
	}
	return (s);
}
/*
int	main(void)
{
	char c[21] = "Holamundo";
	ft_memset(c, 'a', 4);
	printf("%s\n", c);
}*/
