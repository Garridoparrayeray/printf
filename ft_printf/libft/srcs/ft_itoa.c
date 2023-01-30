/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:34:57 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:19:56 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_itoa(size_t n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbr_itoa (n / 10, str, i);
		ft_putnbr_itoa (n % 10, str, i);
	}
	else
	{	
		str[*i] = n + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char	*mem;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	mem = (char *)malloc((sizeof(char) * ft_nbrlen(n)) + 1);
	if (mem == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		mem[i] = '-';
		i++;
		n *= -1;
	}
	ft_putnbr_itoa(n, mem, &i);
	mem[i] = '\0';
	return (mem);
}
/*
int	main(void)
{
	int	n;
	n = -2147483648;
	printf("%s\n", ft_itoa(n));
	str[(*i)++] = n + '0'; esto es para la linea 41, un sustituto.
}*/
