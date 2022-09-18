/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:58:54 by leyeghia          #+#    #+#             */
/*   Updated: 2022/04/01 18:24:46 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int		a;
	size_t	k;

	a = 0;
	k = 0;
	while (s[k] && s)
	{
		if (s[k] != c && c)
		{
			while (s[k] != c && s[k])
				k++;
			++a;
		}
		else if (c == 0)
			return (1);
		while (s[k] == c && s[k])
			k++;
	}
	return (a);
}

static int	ft_strsize(char const *s, char c)
{
	int	size;

	size = 0;
	while (s[size] != c && s[size])
		size++;
	return (size);
}

static char	*ft_allocate(char const *s, char c)
{
	char	*str;

	str = malloc(ft_strsize(s, c) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s, ft_strsize(s, c) + 1);
	return (str);
}

static void	*ft_free(char **a, int k)
{
	while (k >= 0)
	{
		free(a[k]);
		k--;
	}
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	wcount;
	char	**str;
	size_t	i;

	i = 0;
	wcount = ft_wordcount(s, c);
	str = malloc((wcount + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (*s && i < wcount)
	{
		while (*s == c)
			s++;
		str[i] = ft_allocate(s, c);
		if (!str[i])
			ft_free(str, i);
		i++;
		while (*s != c)
			s++;
	}
	str[wcount] = NULL;
	return (str);
}
