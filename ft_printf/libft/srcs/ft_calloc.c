/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:33:30 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 13:50:19 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	unsigned int	i;

	i = 0;
	mem = malloc(size * count);
	if (mem == NULL)
		return (NULL);
	while (i < (size * count))
	{
		((char *)mem)[i] = '\0';
		i++;
	}
	return (mem);
}
/*
int	main(void)
{
	printf("%s\n", ft_calloc(2,2));
	printf("%s\n", calloc(2,2));

}*/
