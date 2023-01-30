/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:33:03 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 13:43:03 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
typedef struct s_struct
{
	int i;
	char s;
	float b;
	char *d;
}		t_struct;*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n--)
	{
		*i = 0;
		i++;
	}
}
/*
int	main(void)
{
	t_struct test;
	ft_bzero (&test, sizeof(test));
	printf("%d\n", test.i);
	printf("%c\n", test.s);
	printf("%f\n", test.b);
	printf("%s\n", test.d);
	printf("%s", ft_bzero("hola", 0));	
}*/
