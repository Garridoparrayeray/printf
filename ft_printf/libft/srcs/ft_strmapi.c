/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:40:04 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:39:50 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*mem;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mem[i] = (*f)(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
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
   resultado = ft_strmapi(str, mi_funcion);
   printf("el resultado es: %s\n", resultado);
   return (0);
}*/
