/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leyeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:12:43 by leyeghia          #+#    #+#             */
/*   Updated: 2022/03/25 16:07:15 by leyeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fs, size_t len)
{
	size_t	i;
	int		j;
	int		l;

	i = 0;
	j = 1;
	l = 0;
	if (*fs == '\0')
		return ((char *) str);
	while ((str || len != 0) && (i < len && str[i]))
	{
		if (fs[0] == str[i])
		{
			while ((fs[j] == str[i + j] || !fs[j]) && i + j - 1 < len)
			{
				if (fs[j] == 0)
					return ((char *) str + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
