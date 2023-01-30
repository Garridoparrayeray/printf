/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:40:27 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/26 17:27:17 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

typedef struct t_struct
{
    va_list args;/*arguments to print out*/
    int width;/*width*/
    int prcs;/*precision*/
    int zero;/*zero-padding*/
    int punto;/*punto literally a dot "."*/
    int dash;/*literally a dash "-"*/
    int total_ln;/*the return value(total lenght)*/
    int signo;/*if its positive or negative*/
    int is_zero;/*if the number its zero*/
    int porcnt;/*porcentaje "%"*/
    int sp;/*flag of the space ' '*/
    int rt;
} t_struct;

int ft_init_struct(t_struct *tab)
{
    va_list args;
    tab->width = 0;
    tab->prcs = 0;
    tab->zero = 0;
    tab->punto = 0;
    tab->dash = 0;
    tab->total_ln = 0;
    tab->signo = 0;
    tab->is_zero = 0;
    tab->porcnt = 0;
    tab->sp = 0;
    tab->rt = 0;
    return (0);
}
int ft_format(va_list args, char const format)
{
    t_struct *tab;
	
	if(format == 'd' || format == 'i')
	{
		int arg = va_arg(tab->args, int);
		tab->rt += ft_printnumb(format);/*TUS MUELAS LUEGO TE SOLUCIONO*/
	}else if(format == 'c')
	{
		int arg = va_arg(tab->args, int);
		tab->rt += ft_putchar(format);
	}else if (format == 's')
    {
		char *arg = va_arg(tab->args, char *);
		tab->rt += ft_printstr(&format);
				
    }else if (format == 'p')
    {
         
    }else if (format == 'x') 
    {
            
    }else if (format == 'X') 
    {
         
    }else if (format == '%') 
    {
            
    }
    tab->rt += tab->total_ln;
    return(tab->rt);
	}
int ft_printf(char const *format, ...)
{
    int i;
	
    t_struct	*tab;
    /*tab = (t_struct *)malloc(sizeof(t_struct));                        
    if (!tab)                         
       return (-1); return (NULL), its the same thing*/
	ft_init_struct(tab);
	va_start(tab->args, format);
	while(format[i])
	{
		if(format[i] == '%')/*me cago en tu puta madre comillas simples*/
		{
			tab->rt += ft_format(tab->args, format[i + 1]);/*why no "*"¿?*/
			i++;
		}else
			tab->rt += ft_putchar(format[i]);
		i++;
   }
   va_end(tab->args);
   /*free(tab);*/
   return (tab->rt);
}
