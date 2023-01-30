/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:53:00 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 15:24:18 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
size_t ft_slen(const char *s, char c)
{
	size_t	i;
	size_t	len;
	
	len = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}
size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == 0)
		return (0);
	 while (s[i] != '\0')
	 {
	 	count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	 }
	 return (count);
}
char	*ft_strndup(const char *s, size_t n, char c)
{
	size_t	i;
	char	*mem;
	
	i = 0;
	mem = (char*)malloc(sizeof(char) * (n + 2));
	if (!mem)
		return (NULL);
	while (i < n && s[i] != c)
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = 0;
	return (mem);
}

char	*ft_wrdcpy(char *dst, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count;
	size_t	j;
	char	**mem;

	i = 0;
	count = ft_count(s, c);
	len = ft_slen(&s[i], c);
	mem = (char**)malloc (sizeof(char*) * (count + 2));
	if (s == NULL)
		return (NULL);
	if (mem == NULL)
		return (NULL);
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(mem[j] = malloc(((len + 2)) * sizeof(char))))
				return (ft_free(mem, j));
			ft_wrdcpy(mem[j], &s[i], c);
			j++;
			i += len;
		}
		else
			i++;
	}
	mem[j] = NULL;
	return (mem);
	printf("%s\n", "Hasta aquí bien 1");
	if (mem == NULL)
		return (NULL);
	if (s == 0 || c == 0)
		return (0);
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		len = ft_slen(s, c);
		if (mem[i] != ft_strndup(s, len))
		{
			printf("%s\n", "Hasta aquí bien 2");
			ft_free(mem, i);
			return (0);
			printf("%s\n", "Hasta aquí bien 3");
		}
		s += len;
		i++;
		printf("%s\n", "Hasta aquí bien 4");

	}
	mem[count] = 0;
	return (mem);


}

int	main(void)
{
	printf("%s\n", *ft_split("HolaMando", 'a'));
}*/
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_free(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	mem = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!mem)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		save = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		mem[i] = ft_strndup(&s[save], j - save);
		if (mem[i++] == 0)
			return (ft_free(mem));
	}
	mem[i] = NULL;
	return (mem);
}
