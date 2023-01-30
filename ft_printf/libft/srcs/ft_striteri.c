/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:17:51 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:30:22 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
/*
char mi_funcion(unsigned int i, char str)
{
   i = 32;
   return (str - i);
}

int main(void)
{
   char    *str;
   char    *resultado;
   str = "?hola?guapa.?";
   printf("el resultado es: %s\n", str);
   resultado = ft_striteri(str, mi_funcion);
   printf("el resultado es: %s\n", resultado);

}*/
