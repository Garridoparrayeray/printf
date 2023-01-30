/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:52:05 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/26 16:17:33 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"
unsigned int	get_digit(unsigned int n)
{
	unsigned int	nbr;
/*putnbr(get the numbers)*/
	if (n == 0)
		return (1);
	nbr = 0;
	while (n > 0)
	{
		n /= 10;
		nbr++;
	}
	return (nbr);
}

void	convert_nb(char *str, unsigned int n, unsigned int nb_digit)
{
	str[nb_digit] = '\0';
	str[--nb_digit] = n % 10 + '0';
	n /= 10;
	while (n > 0)
	{
		str[--nb_digit] = n % 10 + '0';
		n /= 10;
	}/*convert de numbers*/
}

char	*ft_utoa(unsigned int n)/*itoa with malloc*/
{
	char			*mem;
	unsigned int	nb_digit;

	nb_digit = get_digit(n);
	if (!(mem = malloc(sizeof(char) * nb_digit + 1)))
		return (NULL);
	convert_nb(mem, n, nb_digit);
	return (mem);
}